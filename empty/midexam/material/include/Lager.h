//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_LAGER_H
#define OOP_LAGER_H

#include <string>

class Lager {
private:
    std::string type = "Beer";
public:
    std::string GetType();
};

#endif // OOP_LAGER_H
