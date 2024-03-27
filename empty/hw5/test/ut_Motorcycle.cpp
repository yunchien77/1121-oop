//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>

#include "Motorcycle.hpp"

TEST(MotorcycleTest, TestMotorcycleWithPlateNumberConstructorShouldSetupCorrectValue){
    Motorcycle motorcycle("AAA-BBBB");

    ASSERT_EQ(motorcycle.GetPlateNumber(), "AAA-BBBB");
}

// Add more tests