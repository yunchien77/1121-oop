//
// Created by 黃漢軒 on 2023/11/14.
//

#ifndef OOP_SUBJECT_H
#define OOP_SUBJECT_H

#include <string>
#include <vector>
#include <iostream>

class Subject
{
private:
    std::string name;
    int credit;
    std::string color;
    // 授課老師
    std::string teacher;
    // department
    std::string department;
    // classroom
    std::string classroom;

    // take class student
    std::vector<std::string> takeClass;

    std::vector<int> time;

public:
    Subject(std::string name, std::vector<int> time, std::string teacher, std::string department, std::string classroom, int credit)
    {
        this->name = name;
        this->time = time;
        this->teacher = teacher;
        this->department = department;
        this->classroom = classroom;
        this->credit = credit;
    }
    virtual ~Subject() = default;

    // 加選使用
    void recordTakeClassStudent(std::string name)
    {
        this->takeClass.push_back(name);
    }

    // 退選使用
    void removeTakeClassStudent(std::string name)
    {
        int index = -1;
        for (int i = 0; i < this->takeClass.size(); i++)
        {
            if (this->takeClass[i] == name)
            {
                index = i;
            }
        }

        if (index == -1)
        {
            return;
        }
        else
        {
            this->takeClass.erase(this->takeClass.begin() + index);
        }
    }

    // 打印修課名單
    void printTakeClassStudent()
    {
        std::cout << "*********************" << std::endl;
        std::cout << "Class <" << this->GetName() << "> students" << std::endl;
        for (int i = 0; i < this->takeClass.size(); i++)
        {
            std::cout << this->takeClass[i] << std::endl;
        }
        std::cout << "*********************" << std::endl;
    }

    std::string GetName()
    {
        return name;
    }

    int GetCredit()
    {
        return credit;
    }

    std::string GetTeacher()
    {
        return teacher;
    }
    std::string GetDepartment()
    {
        return department;
    }
    std::string GetClassroom()
    {
        return classroom;
    }
    std::vector<int> GetTime()
    {
        return time;
    }
    virtual std::string GetType() = 0;
    virtual std::string GetColor()
    {
        return "\033[0m";
    }
};

#endif // OOP_SUBJECT_H
