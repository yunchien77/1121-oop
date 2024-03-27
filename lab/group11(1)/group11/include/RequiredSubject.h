//
// Created by 黃漢軒 on 2023/11/14.
//

#ifndef OOP_REQUIREDSUBJECT_H
#define OOP_REQUIREDSUBJECT_H

#include <string>

#include "Color.h"
#include "Subject.h"

class RequiredSubject : public Subject
{
private:
    std::string type = "Required Subject";

public:
    RequiredSubject(std::string name, std::vector<int> time, std::string teacher, std::string department, std::string classroom, int credit) : Subject(name, time, teacher, department, classroom, credit)
    {
    }
    ~RequiredSubject() override = default;
    std::string GetType() override
    {
        return type;
    }
    std::string GetColor() override
    {
        return Color::YELLOW;
    }
};

#endif // OOP_REQUIREDSUBJECT_H
