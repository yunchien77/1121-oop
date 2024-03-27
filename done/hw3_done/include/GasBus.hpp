//
// Created by 黃漢軒 on 2023/10/21.
//

#ifndef OOP_GASBUS_HPP
#define OOP_GASBUS_HPP

#include "Bus.hpp"

class GasBus : public Bus { // You may need to do some inheritance here.
private:
    /* Define the private member here */
    unsigned int gas;

public:
    /* Define the public member here */
    GasBus(std::vector<std::string> stops, std::string routeName,
           unsigned int gas);
    unsigned int GetGas();
    void SetGas(unsigned int gas);
    unsigned int GetPrice(int stopNumber) override;
};

#endif // OOP_GASBUS_HPP
