//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>

#include "Car.hpp"

TEST(CarTest, TestCarWithPlateNumberConstructorShouldSetupCorrectValue){
    Car Car("AAA-BBBB");

    ASSERT_EQ(Car.GetPlateNumber(), "AAA-BBBB");
}

// Add more tests