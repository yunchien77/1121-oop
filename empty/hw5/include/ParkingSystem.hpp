//
// Created by 黃漢軒 on 2023/11/20.
//

#ifndef OOP_PARKINGSYSTEM_HPP
#define OOP_PARKINGSYSTEM_HPP

#include <vector>
#include <string>

#include "ElectricVehicle.hpp"
#include "Vehicle.hpp"

class ParkingSystem {
private:
    std::vector<std::shared_ptr<Vehicle>> vehicles;

    int FindVehicleIndexByPlateNumber(std::string plateNumber);

    int GetChargingFeeByPlateNumber(std::string plateNumber);
public:
    ParkingSystem();

    void AddVehicle(std::shared_ptr<Vehicle> vehicle);

    void RemoveVehicle(std::string plateNumber);

    int GetTotalParkingPricePerHour();

    int CalculateParkingPrice(std::string plateNumber, int hour);

    template <typename T>
    std::vector<std::string> Select(){
        std::string targetVehicleName = T().GetVehicleName();
        std::vector<std::string> vec;

        for(std::shared_ptr<Vehicle> vehicle : vehicles){
            if(vehicle->GetVehicleName() == targetVehicleName){
                vec.push_back(vehicle->GetPlateNumber());
            }
        }

        return vec;
    }

    int GetSize();
};

#endif // OOP_PARKINGSYSTEM_HPP
