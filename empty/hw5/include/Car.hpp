//
// Created by 黃漢軒 on 2023/11/20.
//

#ifndef OOP_CAR_HPP
#define OOP_CAR_HPP

#include "Vehicle.hpp"

#include <string>

class Car : public Vehicle {
public:
    Car();
    Car(std::string plateNumber);
    ~Car() override = default;
    std::string GetVehicleName() override;
    int GetPrice() override;
};

#endif // OOP_CAR_HPP
