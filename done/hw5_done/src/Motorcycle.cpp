//
// Created by 黃漢軒 on 2023/11/22.
//

#include "../include/Motorcycle.hpp"

Motorcycle::Motorcycle()
    : Vehicle() {}

Motorcycle::Motorcycle(std::string plateNumber)
    : Vehicle(plateNumber) {}

std::string Motorcycle::GetVehicleName() {
    return "Motorcycle";
}

int Motorcycle::GetPrice() {
    return 25;
}