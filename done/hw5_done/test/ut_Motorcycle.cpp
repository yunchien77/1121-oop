//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>

#include "Motorcycle.hpp"

TEST(MotorcycleTest,
     TestMotorcycleWithPlateNumberConstructorShouldSetupCorrectValue) {
    Motorcycle motorcycle("AAA-BBBB");

    ASSERT_EQ(motorcycle.GetPlateNumber(), "AAA-BBBB");
}

TEST(MotorcycleTest, name_without_anything) {
    Motorcycle motorcycle;
    std::string platename = motorcycle.GetPlateNumber();
    ASSERT_EQ(motorcycle.GetPlateNumber(), platename);
}

TEST(MotorcycleTest, price) {
    Motorcycle motorcycle;
    ASSERT_EQ(motorcycle.GetPrice(), 25);
}

TEST(MotorcycleTest, type) {
    Motorcycle motorcycle;
    ASSERT_EQ(motorcycle.GetType(), "Vehicle");
}

TEST(MotorcycleTest, name) {
    Motorcycle motorcycle;
    ASSERT_EQ(motorcycle.GetVehicleName(), "Motorcycle");
}

// Add more tests