//
// Created by 黃漢軒 on 2023/11/20.
//

#ifndef OOP_MOTORCYCLE_HPP
#define OOP_MOTORCYCLE_HPP

#include "Vehicle.hpp"
#include <string>

class Motorcycle : public Vehicle {
public:
    Motorcycle();
    Motorcycle(std::string plateNumber);
    ~Motorcycle() override = default;
    std::string GetVehicleName() override;
    int GetPrice() override;
};

#endif // OOP_MOTORCYCLE_HPP
