//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>

#include "Car.hpp"

TEST(CarTest, TestCarWithPlateNumberConstructorShouldSetupCorrectValue) {
    Car Car("AAA-BBBB");

    ASSERT_EQ(Car.GetPlateNumber(), "AAA-BBBB");
}

TEST(CarTest, name_without_anything) {
    Car Car;
    std::string platename = Car.GetPlateNumber();
    ASSERT_EQ(Car.GetPlateNumber(), platename);
}

TEST(CarTest, price) {
    Car Car;
    ASSERT_EQ(Car.GetPrice(), 40);
}

TEST(CarTest, type) {
    Car Car;
    ASSERT_EQ(Car.GetType(), "Vehicle");
}

TEST(CarTest, name) {
    Car Car;
    ASSERT_EQ(Car.GetVehicleName(), "Car");
}
// Add more tests