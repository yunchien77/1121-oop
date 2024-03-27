//
// Created by 黃漢軒 on 2023/12/11.
//

#include "RandomStone.hpp"

/// RandomGenerator
/// It will generate a random integer from 0 to the size of smeltResults
int RandomStone::RandomGenerator(){
    int size = smeltResults.size();
    int randInt = rand() % size;
    return randInt;
}

RandomStone::RandomStone(std::vector<SmeltResult> smeltResults){
    if(smeltResults.size() < 1){
        throw std::invalid_argument("The smeltResults should have more than one item.");
    }
    this->smeltResults = smeltResults;
}

SmeltResult RandomStone::Smelt(){
    int randInt = RandomGenerator();
    std::cout << "Trigger random QTE!" << std::endl;
    std::cout << "Got " << randInt << std::endl;

    SmeltResult item = smeltResults[randInt];
    std::cout << "Return " << item.GetName() << std::endl;

    return item;
}