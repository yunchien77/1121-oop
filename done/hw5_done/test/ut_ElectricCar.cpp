#include <gtest/gtest.h>

#include "ElectricCar.hpp"

TEST(ElectricCarTest,
     TestElectricCarPowerAndNumberPlateConstructorShouldSetupCorrectValue) {
    ElectricCar electricCar(5, "AAA-BBBB");

    ASSERT_EQ(electricCar.GetPlateNumber(), "AAA-BBBB");
    ASSERT_EQ(electricCar.GetBatteryCapacity(), 10);
    ASSERT_EQ(electricCar.GetCurrentPower(), 5);
}

TEST(ElectricCarTest, name_without_anything) {
    ElectricCar electricCar;
    std::string platename = electricCar.GetPlateNumber();
    ASSERT_EQ(electricCar.GetPlateNumber(), platename);
}

TEST(ElectricCarTest, name_with_power) {
    ElectricCar electricCar(5);
    ASSERT_EQ(electricCar.GetCurrentPower(), 5);
}

TEST(ElectricCarTest, price) {
    ElectricCar electricCar;
    ASSERT_EQ(electricCar.GetPrice(), 40);
}

TEST(ElectricCarTest, type) {
    ElectricCar electricCar;
    ASSERT_EQ(electricCar.GetType(), "ElectricVehicle");
}

TEST(ElectricCarTest, name) {
    ElectricCar electricCar;
    ASSERT_EQ(electricCar.GetVehicleName(), "ElectricCar");
}
// Add more tests