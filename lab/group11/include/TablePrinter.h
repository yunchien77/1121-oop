//
// Created by 黃漢軒 on 2023/11/14.
//

#ifndef OOP_TABLEPRINTER_H
#define OOP_TABLEPRINTER_H

#include <iostream>
#include <string>

#include "Color.h"
#include "Subject.h"

#define COLUMN 5
#define PERIOD 9
#define LENGTH 40

class TablePrinter {
public:
    TablePrinter(std::vector<std::shared_ptr<Subject>> courses){
        this->courses = courses;
    }
    void Print(){
        std::vector<std::shared_ptr<Subject>> timeArray = GetTimeArray();
        for(int i = 0; i < PERIOD; i++) {
            std::cout << (i == 0 ? GetHeader() + '\n' : "");
            std::cout << GetBlankBorderLine() << std::endl;
            std::cout << GetTextLine(timeArray, i * 5) << std::endl;
            std::cout << GetNumberLine(i*5) << std::endl;
            std::cout << GetHeader() << std::endl;
        }
    }
private:
    std::vector<std::shared_ptr<Subject>> courses;

    std::string GetHeader(){
        std::string result;

        for(int i = 0; i < COLUMN; i++){
            result += "+";
            for(int j = 0; j < LENGTH; j++){
                result += "-";
            }
        }

        result += "+";

        return result;
    }

    std::string GetBlankBorderLine(){
        std::string result;

        for(int i = 0; i < COLUMN; i++){
            result += "+";
            for(int j = 0; j < LENGTH; j++){
                result += " ";
            }
        }

        result += "+";

        return result;
    }

    std::string GetTextLine(std::vector<std::shared_ptr<Subject>> &timeArray, int start){
        std::string result;

        for(int i = 0; i < COLUMN; i++){
            result += "+";
            if(timeArray[start + i] != nullptr) {
                result += timeArray[start + i]->GetColor() + MidText(timeArray[start + i]->GetName()) + Color::RESET;
            }else{
                result += MidText("");
            }
        }

        result += "+";

        return result;
    }

    std::string GetNumberLine(int start){
        std::string result;

        for(int i = 0; i < COLUMN; i++){
            result += "+";
            result += LeftText(std::to_string(start + i + 1));
        }

        result += "+";

        return result;
    }

    std::string MidText(std::string text){
        int length = text.length();
        std::string result;
        for(int i = 0; i < (LENGTH - length) / 2; i++){
            result += " ";
        }
        result += text;
        for(int i = 0; i < (LENGTH - length) / 2 + ((LENGTH - length) % 2); i++){
            result += " ";
        }
        return result;
    }

    std::string LeftText(std::string text){
        int length = text.length();
        std::string result;
        for(int i = 0; i < (LENGTH - 1 - length); i++){
            result += " ";
        }
        result += text + " ";
        return result;
    }

    std::vector<std::shared_ptr<Subject>> GetTimeArray(){
        std::vector<std::shared_ptr<Subject>> timeArray(COLUMN * PERIOD);
        for(int i = 0; i < courses.size(); i++){
            for(int j = 0; j < courses[i]->GetTime().size(); j++){
                timeArray[courses[i]->GetTime()[j] - 1] = courses[i];
            }
        }
        return timeArray;
    }
};

#endif // OOP_TABLEPRINTER_H
