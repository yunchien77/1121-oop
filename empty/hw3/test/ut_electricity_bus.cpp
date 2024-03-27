#include <string>
#include <vector>
#include <gtest/gtest.h>
#include <stdexcept>

#include "ElectricBus.hpp"

TEST(HW3, TestConstructElectricBusShouldReturnCorrectElectricity){
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = electricBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}

// Add test to improve the test coverage.