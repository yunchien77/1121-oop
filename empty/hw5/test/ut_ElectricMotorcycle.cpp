//
// Created by 黃漢軒 on 2023/11/20.
//
#include <gtest/gtest.h>

#include "ElectricMotorcycle.hpp"

TEST(ElectricMotorcycleTest, TestElectricMotorcyclePowerAndNumberPlateConstructorShouldSetupCorrectValue){
    ElectricMotorcycle ElectricMotorcycle(5, "AAA-BBBB");

    ASSERT_EQ(ElectricMotorcycle.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(ElectricMotorcycle.GetBatteryCapacity(), 10);
    ASSERT_EQ(ElectricMotorcycle.GetCurrentPower(), 5);
}

// Add more tests