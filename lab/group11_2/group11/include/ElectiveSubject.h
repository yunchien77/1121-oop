//
// Created by 黃漢軒 on 2023/11/14.
//

#ifndef OOP_ELECTIVESUBJECT_H
#define OOP_ELECTIVESUBJECT_H

#include <string>

#include "Color.h"
#include "Subject.h"

class ElectiveSubject : public Subject
{
private:
    std::string type = "Elective Subject";

public:
    ElectiveSubject(std::string name, std::vector<int> time, std::string teacher, std::string department, std::string classroom, int credit) : Subject(name, time, teacher, department, classroom, credit)
    {
    }
    std::string GetType() override
    {
        return type;
    }
    std::string GetColor() override
    {
        return Color::BLUE;
    }
};

#endif // OOP_ELECTIVESUBJECT_H
