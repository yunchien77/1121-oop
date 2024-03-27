//
// Created by 黃漢軒 on 2023/11/14.
//

#ifndef OOP_COLOR_H
#define OOP_COLOR_H

#include "string"

class Color {
public:
    static std::string BLACK;
    static std::string RED;
    static std::string BLUE;
    static std::string YELLOW;
    static std::string RESET;
};

std::string Color::BLACK = "\033[30m";
std::string Color::RED = "\033[31m";
std::string Color::BLUE = "\033[34m";
std::string Color::YELLOW = "\033[33m";
std::string Color::RESET = "\033[0m";

#endif // OOP_COLOR_H
