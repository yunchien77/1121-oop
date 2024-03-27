//
// Created by Uriah Xuan on 10/16/2023.
//

#ifndef OOP_ELECTRICBUS_HPP
#define OOP_ELECTRICBUS_HPP

#include "Bus.hpp"

class ElectricBus : public Bus { // You may need to do some inheritance here.
private:
    /* Define the private member here */
    unsigned short electricityPercentage;

public:
    /* Define the public member here */
    ElectricBus(std::vector<std::string> stops, std::string routeName,
                unsigned short electricityPercentage);
    unsigned short GetElectricityPercentage();
    void SetElectricityPercentage(unsigned short electricity);
    unsigned int GetPrice(int stopNumber) override;
};

#endif // OOP_ELECTRICBUS_HPP
