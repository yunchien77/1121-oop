#include "../include/storage.hpp"
#include <string>
#include <vector>

/* 根據 Header 來實作對應的 Function */

// constructor
Storage::Storage(int n, std::string snacks[]) {
    for (int i = 0; i < n; i++) {
        storage.push_back(snacks[i]);
    }
}
// constructor
Storage::Storage(std::vector<std::string> snacks)
    : storage(snacks) {}

// add snack to the back of vector "storage"
void Storage::Add(std::string snack) {
    storage.push_back(snack);
}
// set snack to particular location(index)
void Storage::Set(size_t index, std::string snack) {
    if (index < storage.size()) {
        storage[index] = snack;
    }
}
// get the snack on the index location
std::string Storage::Get(size_t index) {
    if (index < storage.size()) {
        return storage[index];
    }
    return "";
}
// eat the snack on the index location(set null string)
void Storage::Eat(size_t index) {
    if (index < storage.size()) {
        storage[index] = "";
    }
}
// get the size(length) of storage vector
size_t Storage::Size() {
    return storage.size();
}