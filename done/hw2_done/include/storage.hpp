#ifndef STORAGE_HPP
#define STORAGE_HPP

#include <string>
#include <vector>

class Storage {
public:
    Storage(int n, std::string snacks[]);     // constructor
    Storage(std::vector<std::string> snacks); // constructor

    void Add(std::string snack); // add snack to the back of vector "storage"
    void Set(size_t index,
             std::string snack);   // set snack to particular location(index)
    std::string Get(size_t index); // get the snack on the index location
    void
    Eat(size_t index); // eat the snack on the index location(set null string)
    size_t Size();     // get the size(length) of storage vector

public:
    std::vector<std::string> storage;
};

#endif