// Implement the function of GasBus here.
#include "../include/GasBus.hpp"

#include <string>
#include <vector>

GasBus::GasBus(std::vector<std::string> stops, std::string routeName,
               unsigned int gas)
    : Bus(stops, routeName),
      gas(gas) {}

unsigned int GasBus::GetGas() {
    return gas;
}

void GasBus::SetGas(unsigned int gas) {
    this->gas = gas;
}

unsigned int GasBus::GetPrice(int stopNumber) {
    unsigned int price = 450;
    if (stopNumber < 30) {
        return price;
    } else {
        price += 5 * (stopNumber - 30);
    }
    return price;
}