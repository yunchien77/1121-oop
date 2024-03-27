//
// Created by 黃漢軒 on 2023/11/20.
//
#include <gtest/gtest.h>

#include "ElectricMotorcycle.hpp"

TEST(
    ElectricMotorcycleTest,
    TestElectricMotorcyclePowerAndNumberPlateConstructorShouldSetupCorrectValue) {
    ElectricMotorcycle ElectricMotorcycle(5, "AAA-BBBB");

    ASSERT_EQ(ElectricMotorcycle.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(ElectricMotorcycle.GetBatteryCapacity(), 10);
    ASSERT_EQ(ElectricMotorcycle.GetCurrentPower(), 5);
}

TEST(ElectricMotorcycleTest, name_without_anything) {
    ElectricMotorcycle ElectricMotorcycle;
    std::string platename = ElectricMotorcycle.GetPlateNumber();
    ASSERT_EQ(ElectricMotorcycle.GetPlateNumber(), platename);
}

TEST(ElectricMotorcycleTest, name_with_power) {
    ElectricMotorcycle ElectricMotorcycle(5);
    ASSERT_EQ(ElectricMotorcycle.GetCurrentPower(), 5);
}

TEST(ElectricMotorcycleTest, price) {
    ElectricMotorcycle ElectricMotorcycle;
    ASSERT_EQ(ElectricMotorcycle.GetPrice(), 25);
}

TEST(ElectricMotorcycleTest, type) {
    ElectricMotorcycle ElectricMotorcycle;
    ASSERT_EQ(ElectricMotorcycle.GetType(), "ElectricVehicle");
}

TEST(ElectricMotorcycleTest, name) {
    ElectricMotorcycle ElectricMotorcycle;
    ASSERT_EQ(ElectricMotorcycle.GetVehicleName(), "ElectricMotorcycle");
}

TEST(ElectricMotorcycleTest, setcap) {
    ElectricMotorcycle ElectricMotorcycle;
    ElectricMotorcycle.SetBatteryCapacity(5);
    ASSERT_EQ(ElectricMotorcycle.GetBatteryCapacity(), 5);
}

TEST(ElectricMotorcycleTest, getpower) {
    ElectricMotorcycle ElectricMotorcycle(10, "AAA-BBBB");
    ASSERT_EQ(ElectricMotorcycle.GetCurrentPower(), 10);
}
// Add more tests