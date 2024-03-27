// Implement the function of ElectricBus here.
#include "../include/ElectricBus.hpp"

#include <stdexcept>
#include <string>
#include <vector>

ElectricBus::ElectricBus(std::vector<std::string> stops, std::string routeName,
                         unsigned short electricityPercentage)
    : Bus(stops, routeName) {
    if (electricityPercentage < 0 || electricityPercentage > 100) {
        throw std::invalid_argument("Invalid_argument");
    }
    this->electricityPercentage = electricityPercentage;
}

unsigned short ElectricBus::GetElectricityPercentage() {
    return electricityPercentage;
}

void ElectricBus::SetElectricityPercentage(unsigned short electricity) {
    if (electricity < 0 || electricity > 100) {
        throw std::invalid_argument("Invalid_argument");
    }
    electricityPercentage = electricity;
}

unsigned int ElectricBus::GetPrice(int stopNumber) {
    unsigned int price = 150;
    if (stopNumber < 20) {
        return price;
    } else {
        price += 10 * (stopNumber - 20);
    }
    return price;
}