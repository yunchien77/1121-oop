//
// Created by 黃漢軒 on 2023/12/11.
//

#include "SmeltResult.hpp"
#include "StackFurnace.hpp"
#include "RandomStone.hpp"

int main(){
    StackFurnace<RandomStone> stackFurnace;
    RandomStone randomStone({
        SmeltResult(1, "Iron"),
        SmeltResult(2, "Gold"),
        SmeltResult(3, "Diamond")
    });

    stackFurnace.AddItem(randomStone);
    SmeltResult result = stackFurnace.SmeltItem();

    std::cout << result.GetName() << std::endl;
}