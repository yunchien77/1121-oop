//
// Created by Uriah Xuan on 10/16/2023.
//

#ifndef OOP_BUS_HPP
#define OOP_BUS_HPP

#include <string>
#include <vector>

class Bus {
private:
    /* Define the private member here */
    std::vector<std::string> stops;
    std::string routeName;

public:
    /* Define the public member here */
    Bus(std::vector<std::string> stops, std::string routeName);
    void setStops(std::vector<std::string> stops);
    void setRouteName(std::string routeName);
    std::vector<std::string> GetStops();
    std::string GetRouteName();
    virtual unsigned short GetSpeedLimit();
    virtual unsigned int GetPrice(
        int stopNumber) = 0; // 純虛擬函數，子類別一定要override(自己定義函數)
};

#endif // OOP_BUS_HPP
