//
// Created by 黃漢軒 on 2023/11/20.
//

#ifndef OOP_ELECTRICVEHICLE_HPP
#define OOP_ELECTRICVEHICLE_HPP

#include "Vehicle.hpp"

class ElectricVehicle : public Vehicle {
private:
    int batteryCapacity = 10;
    int currentPower;
public:
    ElectricVehicle();
    ElectricVehicle(int currentPower);
    ElectricVehicle(int currentPower, std::string plateNumber);
    ~ElectricVehicle() override = default;
    std::string GetType() override;
    virtual std::string GetVehicleName() override = 0;
    int GetCurrentPower();
    int GetBatteryCapacity();
    void SetBatteryCapacity(int batteryCapacity);
};

#endif // OOP_ELECTRICVEHICLE_HPP
