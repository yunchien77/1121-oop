//
// Created by 黃漢軒 on 2023/11/22.
//

#include "../include/Car.hpp"

Car::Car()
    : Vehicle() {}

Car::Car(std::string plateNumber)
    : Vehicle(plateNumber) {}

std::string Car::GetVehicleName() {
    return "Car";
}

int Car::GetPrice() {
    return 40;
}