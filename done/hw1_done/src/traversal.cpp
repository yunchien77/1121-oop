#include <algorithm>
#include <iostream>
#include <vector>

#include "../include/traversal.hpp"

bool traversal(std::size_t n, int arr[]) {
    /* 實作題目上的需求，若 arr 能夠被完整遍歷，輸出 Yes，否則輸出 No */
    std::size_t index = 0;
    std::vector<int> visited;
    for (std::size_t i = 0; i < n; i++) {
        // 檢查值是否已存在vector中，若未遍歷則回傳.end()
        if (index < n && std::find(visited.begin(), visited.end(),
                                   arr[index]) == visited.end()) {
            visited.push_back(arr[index]);
            index = arr[index];
        } else {
            return false;
        }
    }
    return true;
}
