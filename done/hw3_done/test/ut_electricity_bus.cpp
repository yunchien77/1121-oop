#include <gtest/gtest.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "ElectricBus.hpp"

TEST(HW3, TestConstructElectricBusShouldReturnCorrectElectricity) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    int electricity = electricBus.GetElectricityPercentage();

    ASSERT_EQ(electricity, 85);
}

// Add test to improve the test coverage.

TEST(HW3, TestConstructElectricBusShouldReturnInvalidAegument) {

    ASSERT_THROW(ElectricBus electricBus({"民權中山路口"}, "民權幹線", 101),
                 std::invalid_argument);
}

TEST(HW3, TestElectricBusGetPriceShouldGetPriceCorrectly) {
    std::vector<std::string> stops = {"Stop1", "Stop2",  "Stop3",  "Stop4",
                                      "stop5", "stop6",  "stop7",  "stop8",
                                      "stop9", "stop10", "stop11", "stop12"};
    ElectricBus electricBus(stops, "民權幹線", 40);

    ASSERT_EQ(electricBus.GetPrice(30), 250);
}

TEST(HW3, TestElectricBusConstructMeglevBusShouldGetSpeedLimitCorrectly) {
    ElectricBus electricBus({"民權中山路口"}, "民權幹線", 85);

    ASSERT_EQ(electricBus.GetSpeedLimit(), 40);
}

TEST(HW3, ElectricBusSetRouteName) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    ElectricBus electricBus(stops, "民權幹線", 40);

    electricBus.setRouteName("中山幹線");

    ASSERT_EQ(electricBus.GetRouteName(), "中山幹線");
}

TEST(HW3, ElectricBusSetupStops) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    ElectricBus electricBus(stops, "民權幹線", 40);

    electricBus.setStops({"忠孝復興", "忠孝新生"});

    ASSERT_EQ(electricBus.GetStops()[1], "忠孝新生");
}

TEST(HW3, ElectricBusSetElectricityPercentage) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    ElectricBus electricBus(stops, "民權幹線", 40);

    electricBus.SetElectricityPercentage(100);

    ASSERT_EQ(electricBus.GetElectricityPercentage(), 100);
}

TEST(HW3, TestElectricBusSetElectricityPercentageInvalidArgument) {
    std::vector<std::string> stops = {"Stop1", "Stop2", "Stop3"};
    ElectricBus electricBus(stops, "民權幹線", 40);

    ASSERT_THROW(electricBus.SetElectricityPercentage(101),
                 std::invalid_argument);
}