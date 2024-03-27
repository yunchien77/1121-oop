//
// Created by 黃漢軒 on 2023/11/22.
//

#include "../include/Vehicle.hpp"

Vehicle::Vehicle(std::string plateNumber) {
    this->plateNumber = plateNumber;
}

Vehicle::Vehicle() {
    this->plateNumber = GeneratePlateNumber();
}

/// A function to get the Type of the Vehicle.
/// It may override by the ElectricVehicle and GetType() will return
/// ElectricVehicle. If it not override by the ElectricVehicle, it should return
/// Vehicle. It's good to separate the vehicle to Vehicle and ElectricVehicle.
/// \return string. Maybe Vehicle or ElectricVehicle.
std::string Vehicle::GetType() {
    return "Vehicle";
}

std::string Vehicle::GetPlateNumber() {
    return this->plateNumber;
}