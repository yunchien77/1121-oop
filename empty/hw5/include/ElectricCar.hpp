#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>
#include "ElectricVehicle.hpp"

class ElectricCar : public ElectricVehicle {
public:
    ElectricCar();
    ElectricCar(int power);
    ElectricCar(int power, std::string plateNumber);
    ~ElectricCar() override = default;
    std::string GetVehicleName() override;
    int GetPrice() override;
};

#endif
