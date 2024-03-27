//
// Created by 黃漢軒 on 2023/10/30.
//

#ifndef OOP_MARTINI_H
#define OOP_MARTINI_H

#include <string>

class Martini {
private:
    std::string type = "Cocktail";
public:
    std::string GetType();
};

#endif // OOP_MARTINI_H
