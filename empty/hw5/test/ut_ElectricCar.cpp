//
// Created by 黃漢軒 on 2023/11/20.
//
#include <gtest/gtest.h>

#include "ElectricCar.hpp"

TEST(ElectricCarTest, TestElectricCarPowerAndNumberPlateConstructorShouldSetupCorrectValue){
    ElectricCar electricCar(5, "AAA-BBBB");

    ASSERT_EQ(electricCar.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(electricCar.GetBatteryCapacity(), 10);
    ASSERT_EQ(electricCar.GetCurrentPower(), 5);
}

// Add more tests