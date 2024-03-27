//
// Created by 黃漢軒 on 2023/11/22.
//

#include "ElectricMotorcycle.hpp"

ElectricMotorcycle::ElectricMotorcycle() : ElectricVehicle() {

}

ElectricMotorcycle::ElectricMotorcycle(int power) : ElectricVehicle(power){

}

ElectricMotorcycle::ElectricMotorcycle(int power, std::string plateNumber) : ElectricVehicle(power, plateNumber){

}

std::string ElectricMotorcycle::GetVehicleName() {
    return "ElectricMotorcycle";
}

int ElectricMotorcycle::GetPrice() {
    return 25;
}