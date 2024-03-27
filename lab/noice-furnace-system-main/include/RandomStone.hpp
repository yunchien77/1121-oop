//
// Created by 黃漢軒 on 2023/12/11.
//

#ifndef OOP_RANDOMSTONE_H
#define OOP_RANDOMSTONE_H

#include <iostream>
#include <vector>

#include "SmeltResult.hpp"

class RandomStone {
private:
    std::vector<SmeltResult> smeltResults;
    int RandomGenerator();
public:
    RandomStone(std::vector<SmeltResult> smeltResults);
    SmeltResult Smelt();
};

#endif // OOP_RANDOMSTONE_H
