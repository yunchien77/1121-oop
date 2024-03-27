//
// Created by 黃漢軒 on 2023/12/11.
//

#ifndef OOP_SMELTRESULT_H
#define OOP_SMELTRESULT_H

#include <string>

class SmeltResult {
private:
    int id;
    std::string name;
public:
    SmeltResult(int id, std::string name){
        this->id = id;
        this->name = name;
    }
    int GetId(){
        return this->id;
    }
    std::string GetName(){
        return this->name;
    }
};

#endif // OOP_SMELTRESULT_H
