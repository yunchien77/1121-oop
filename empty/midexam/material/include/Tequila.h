//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_TEQUILA_H
#define OOP_TEQUILA_H

#include <string>

class Tequila {
private:
    std::string type = "Shot";
public:
    std::string GetType();
};

#endif // OOP_TEQUILA_H
