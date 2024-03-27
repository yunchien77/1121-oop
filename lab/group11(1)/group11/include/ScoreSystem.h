//
// Created by 黃漢軒 on 2023/11/14.
//

#ifndef OOP_SCORESYSTEM_H
#define OOP_SCORESYSTEM_H

#include <string>
#include <memory>
#include <algorithm>
#include "TablePrinter.h"
#include "Subject.h"
#include <stdexcept>

class ScoreSystem
{
private:
    std::string name;

    std::vector<std::shared_ptr<Subject>> courses;

    // 確認加選是否衝堂
    bool conflict(std::shared_ptr<Subject> addCourse)
    {
        std::vector<int> ocupiedClass;

        for (int i = 0; i < this->courses.size(); i++)
        {
            for (int j = 0; j < this->courses[i]->GetTime().size(); j++)
            {
                ocupiedClass.push_back(this->courses[i]->GetTime()[j]);
            }
        }

        for (int i = 0; i < addCourse->GetTime().size(); i++)
        {
            if (std::find(ocupiedClass.begin(), ocupiedClass.end(), addCourse->GetTime()[i]) != ocupiedClass.end())
            {
                std::cout << "Conflict at " << addCourse->GetTime()[i]<< std::endl;
                return true;
            }
        }
        return false;
    }

    // 計算 given class在 courses 的 index
    int givenClassIndex(std::string className)
    {
        for (int i = 0; i < this->courses.size(); i++)
        {
            if ((*this->courses[i]).GetName() == className)
            {
                return i;
            }
        }
        return -1;
    }

public:
    ScoreSystem(std::string name)
    {
        this->name = name;
    }

    std::string getName()
    {
        return this->name;
    }

    // 加選
    void AddCourse(const std::shared_ptr<Subject> &course)
    {
        if (this->conflict(course))
        {
            return;
        }
        courses.push_back(course);
        course->recordTakeClassStudent(this->name);
        std::cout << "Add course success!!!" << std::endl;
    }

    // 退選且至少三學分
    void dropClass(std::string className)
    {
        if (this->calculateCredits() <= 3)
        {
            std::cout << "You should take at least one class!!!" << std::endl;
            return;
        }

        int index = this->givenClassIndex(className);

        if (index == -1)
        {
            std::cout << "You didn't select " << className << "!!!" << std::endl;
        }
        else
        {
            this->courses[index]->removeTakeClassStudent(this->name);
            this->courses.erase(this->courses.begin() + index);
            std::cout << "Drop class success!!!" << std::endl;
        }
    }

    // 列出所選的課的課程資訊
    void listAllCourses()
    {
        std::cout << "-----------------------" << std::endl;
        std::cout << "<" << this->name << "'s class>" << std::endl;
        for (int i = 0; i < this->courses.size(); i++)
        {
            std::cout << "'" << this->courses[i]->GetName() << "' Prof: " << this->courses[i]->GetTeacher()
                      << ", Classroom: " << this->courses[i]->GetClassroom() << ", Credit: " << this->courses[i]->GetCredit() << ", " << this->courses[i]->GetType()
                      << std::endl;
        }

        std::cout << "-----------------------" << std::endl;
    }

    std::vector<std::shared_ptr<Subject>> getCourses()
    {
        return this->courses;
    }

    // 打印修課名單
    void listGivenClassStudents(std::string className)
    {
        int index = this->givenClassIndex(className);
        if (index == -1)
        {
            std::cout << "You didn't select " << className << "!!!" << std::endl;
            return;
        }

        this->courses[index]->printTakeClassStudent();
    }

    // 計算學分
    int calculateCredits()
    {
        int sum = 0;
        for (int i = 0; i < this->courses.size(); i++)
        {
            sum += (*this->courses[i]).GetCredit();
        }
        return sum;
    }

    void Print()
    {
        TablePrinter tablePrinter(courses);
        tablePrinter.Print();
    }
};

#endif // OOP_SCORESYSTEM_H
