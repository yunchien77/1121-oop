//
// Created by 黃漢軒 on 2023/10/21.
//

#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "GasBus.hpp"

TEST(HW3, TestSetRouteNameShouldSetupRouteName) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    GasBus gasBus(stops, "民權幹線", 40);

    gasBus.setRouteName("中山幹線");

    ASSERT_EQ(gasBus.GetRouteName(), "中山幹線");
}

TEST(HW3, TestSetStopsShouldSetupStops) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    GasBus gasBus(stops, "民權幹線", 40);

    gasBus.setStops({"忠孝復興"});

    stops = {"忠孝復興"};

    ASSERT_EQ(gasBus.GetStops(), stops);
}

TEST(HW3, TestSetGasShouldSetupGas) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    GasBus gasBus(stops, "民權幹線", 40);

    gasBus.SetGas(100);

    ASSERT_EQ(gasBus.GetGas(), 100);
}

TEST(HW3, TestGetPriceShouldGetPrice) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    GasBus gasBus(stops, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetPrice(stops.size()), 450);
}

TEST(HW3, TestGetSpeedLimitShouldGetSpeedLimit) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    GasBus gasBus(stops, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetSpeedLimit(), 40);
}

TEST(HW3, TestGetPriceShouldGetPricePro) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    GasBus gasBus(stops, "民權幹線", 40);

    ASSERT_EQ(gasBus.GetPrice(31), 455);
}