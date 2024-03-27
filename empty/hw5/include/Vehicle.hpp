//
// Created by 黃漢軒 on 2023/11/20.
//

#ifndef OOP_VEHICLE_HPP
#define OOP_VEHICLE_HPP

#include <string>

class Vehicle {
private:
    std::string plateNumber;

    /// A private static function for Vehicle to generate the plate number.
    /// Simply generate the random plate number with format AAA-0000 which A is algebra and 0 is number
    /// \return a string plate number formatted AAA-0000 which A is algebra and 0 is number
    std::string GeneratePlateNumber(){
        std::string plateNumber;

        for(int i = 0; i < 3; i++){
            plateNumber += rand() % 26 + 'A';
        }
        plateNumber += "-";
        for(int i = 0; i < 4; i++){
            plateNumber += rand() % 10 + '0';
        }

        return plateNumber;
    }
public:
    Vehicle(std::string plateNumber);
    Vehicle();
    virtual ~Vehicle() = default;
    virtual int GetPrice() = 0;
    /// A function to get the Type of the Vehicle.
    /// It may override by the ElectricVehicle and GetType() will return ElectricVehicle.
    /// If it not override by the ElectricVehicle, it should return Vehicle.
    /// It's good to separate the vehicle to Vehicle and ElectricVehicle.
    /// \return string. Maybe Vehicle or ElectricVehicle.
    virtual std::string GetType();
    virtual std::string GetVehicleName() = 0;
    std::string GetPlateNumber();
};

#endif // OOP_VEHICLE_HPP
