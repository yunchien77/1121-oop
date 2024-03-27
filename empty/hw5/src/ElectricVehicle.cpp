//
// Created by 黃漢軒 on 2023/11/22.
//


#include "ElectricVehicle.hpp"

ElectricVehicle::ElectricVehicle() : Vehicle() {
    this->currentPower = 0;
}

ElectricVehicle::ElectricVehicle(int currentPower) : Vehicle(){
    this->currentPower = currentPower;
}

ElectricVehicle::ElectricVehicle(int currentPower, std::string plateNumber) : Vehicle(plateNumber){
    this->currentPower = currentPower;
}

std::string ElectricVehicle::GetType() {
    return "ElectricVehicle";
}

int ElectricVehicle::GetCurrentPower(){
    return this->currentPower;
}

int ElectricVehicle::GetBatteryCapacity(){
    return this->batteryCapacity;
}

void ElectricVehicle::SetBatteryCapacity(int batteryCapacity){
    this->batteryCapacity = batteryCapacity;
}