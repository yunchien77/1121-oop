//
// Created by 黃漢軒 on 2023/11/22.
//

#include "../include/ElectricCar.hpp"

ElectricCar::ElectricCar()
    : ElectricVehicle() {}

ElectricCar::ElectricCar(int power)
    : ElectricVehicle(power) {}

ElectricCar::ElectricCar(int power, std::string plateNumber)
    : ElectricVehicle(power, plateNumber) {}

std::string ElectricCar::GetVehicleName() {
    return "ElectricCar";
}

int ElectricCar::GetPrice() {
    return 40;
}