//
// Created by 黃漢軒 on 2023/11/14.
//

#ifndef OOP_SUBJECT_H
#define OOP_SUBJECT_H

#include <string>
#include <vector>

class Subject {
private:
    std::string name;
    int credit;
    std::string color;
    std::vector<int> time;
public:
    Subject(std::string name, std::vector<int> time){
        this->name = name;
        this->time = time;
    }
    virtual ~Subject() = default;
    std::string GetName(){
        return name;
    }
    int GetCredit(){
        return credit;
    }
    std::vector<int> GetTime(){
        return time;
    }
    virtual std::string GetType() = 0;
    virtual std::string GetColor(){
        return "\033[0m";
    }
};

#endif // OOP_SUBJECT_H
