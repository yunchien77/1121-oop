//
// Created by 黃漢軒 on 2023/10/21.
//

#include <string>
#include <vector>
#include <gtest/gtest.h>
#include <stdexcept>

#include "GasBus.hpp"

TEST(HW3, TestSetRouteNameShouldSetupRouteName){
    GasBus gasBus(GetStops(), "民權幹線", 40);

    gasBus.setRouteName("中山幹線");

    ASSERT_EQ(gasBus.GetRouteName(), "中山幹線");
}