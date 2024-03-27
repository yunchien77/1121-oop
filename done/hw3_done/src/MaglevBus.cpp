// Implement the function of MaglevBus here.
#include "../include/MaglevBus.hpp"

#include <stdexcept>
#include <string>
#include <vector>

MaglevBus::MaglevBus(std::vector<std::string> stops, std::string routeName,
                     unsigned short electricityPercentage)
    : Bus(stops, routeName) {
    if (electricityPercentage < 0 || electricityPercentage > 100) {
        throw std::invalid_argument("Invalid_Argument");
    }
    this->electricityPercentage = electricityPercentage;
}

unsigned short MaglevBus::GetElectricityPercentage() {
    return electricityPercentage;
}

void MaglevBus::SetElectricityPercentage(unsigned short electricity) {
    if (electricity < 0 || electricity > 100) {
        throw std::invalid_argument("Invalid_argument");
    }
    electricityPercentage = electricity;
}

unsigned short MaglevBus::GetSpeedLimit() {
    return 80;
}

unsigned int MaglevBus::GetPrice(int stopNumber) {
    unsigned int price = 750;
    if (stopNumber < 10) {
        return price;
    } else {
        price += 15 * (stopNumber - 10);
    }
    return price;
}
