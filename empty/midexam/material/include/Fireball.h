//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_FIREBALL_H
#define OOP_FIREBALL_H

#include <string>

class Fireball {
private:
    std::string type = "Shot";
public:
    std::string GetType();
};

#endif // OOP_FIREBALL_H
