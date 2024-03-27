//
// Created by 黃漢軒 on 2023/10/21.
//

#ifndef OOP_MAGLEVBUS_HPP
#define OOP_MAGLEVBUS_HPP

#include "Bus.hpp"

class MaglevBus : public Bus { // You may need to do some inheritance here.
private:
    /* Define the private member here */
    unsigned short electricityPercentage;

public:
    /* Define the public member here */
    MaglevBus(std::vector<std::string> stops, std::string routeName,
              unsigned short electricityPercentage);
    unsigned short GetElectricityPercentage();
    void SetElectricityPercentage(unsigned short electricity);
    unsigned short GetSpeedLimit() override;
    unsigned int GetPrice(int stopNumber) override;
};

#endif // OOP_MAGLEVBUS_HPP
