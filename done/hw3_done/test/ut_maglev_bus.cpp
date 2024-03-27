#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "MaglevBus.hpp"

TEST(HW3, TestConstructMeglevBusShouldReturnCorrectElectricity) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = maglevBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}

// Add test to improve the test coverage.

TEST(HW3, TestGetPriceShouldGetPriceCorrectly) {
    std::vector<std::string> stops = {"Stop1", "Stop2",  "Stop3",  "Stop4",
                                      "stop5", "stop6",  "stop7",  "stop8",
                                      "stop9", "stop10", "stop11", "stop12"};
    MaglevBus maglevBus(stops, "民權幹線", 40);

    ASSERT_EQ(maglevBus.GetPrice(stops.size()), 780);
}

TEST(HW3, TestConstructMeglevBusShouldGetSpeedLimitCorrectly) {
    MaglevBus maglevBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(maglevBus.GetSpeedLimit(), 80);
}

TEST(HW3, SetRouteName) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    MaglevBus maglevBus(stops, "民權幹線", 40);

    maglevBus.setRouteName("中山幹線");

    ASSERT_EQ(maglevBus.GetRouteName(), "中山幹線");
}

TEST(HW3, SetupStops) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    MaglevBus maglevBus(stops, "民權幹線", 40);

    maglevBus.setStops({"忠孝復興", "忠孝新生"});

    ASSERT_EQ(maglevBus.GetStops()[1], "忠孝新生");
}

TEST(HW3, SetElectricityPercentage) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    MaglevBus maglevBus(stops, "民權幹線", 40);

    maglevBus.SetElectricityPercentage(100);

    ASSERT_EQ(maglevBus.GetElectricityPercentage(), 100);
}

TEST(HW3, SetElectricityPercentageInvalidArgument) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    MaglevBus maglevBus(stops, "民權幹線", 40);

    ASSERT_THROW(maglevBus.SetElectricityPercentage(101),
                 std::invalid_argument);
}

TEST(HW3, TestConstructReturnInvalidAegument) {

    ASSERT_THROW(
        MaglevBus maglevBus({"民權中山路口", "忠孝復興"}, "民權幹線", 101),
        std::invalid_argument);
}