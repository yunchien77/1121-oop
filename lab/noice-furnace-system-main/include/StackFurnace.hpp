//
// Created by 黃漢軒 on 2023/12/11.
//

#include <vector>

#ifndef OOP_FURNACE_HPP

// A Noice Furnace here.

template<typename T>
class StackFurnace{
private:
    std::vector<T> result;
public:
    StackFurnace() = default;
    StackFurnace(std::vector<T> result){
        this->result = result;
    }
    void AddItem(T item){
        result.push_back(item);
    }
    T PopItem(){
        T item = result.back();
        result.pop_back();
        return item;
    }
    SmeltResult SmeltItem(){
        T item = PopItem();
        return item.Smelt();
    }
    int Size(){
        return result.size();
    }
};

#define OOP_FURNACE_HPP

#endif // OOP_FURNACE_HPP
