//
// Created by 黃漢軒 on 2023/11/20.
//

#ifndef OOP_ELECTRICMOTORCYCLE_HPP
#define OOP_ELECTRICMOTORCYCLE_HPP

#include "ElectricVehicle.hpp"
#include <string>

class ElectricMotorcycle : public ElectricVehicle {
public:
    ElectricMotorcycle();
    ElectricMotorcycle(int power);
    ElectricMotorcycle(int power, std::string plateNumber);
    std::string GetVehicleName() override;
    int GetPrice() override;
};

#endif // OOP_ELECTRICMOTORCYCLE_HPP
