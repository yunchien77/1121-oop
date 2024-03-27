#include <string>
#include <vector>
#include <gtest/gtest.h>
#include <stdexcept>

#include "MaglevBus.hpp"


TEST(HW3, TestConstructMeglevBusShouldReturnCorrectElectricity){
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = maglevBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}

// Add test to improve the test coverage.