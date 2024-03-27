//
// Created by 黃漢軒 on 2023/11/20.
//

#include <gtest/gtest.h>

#include "Car.hpp"
#include "ElectricCar.hpp"
#include "ElectricMotorcycle.hpp"
#include "Motorcycle.hpp"
#include "ParkingSystem.hpp"

/*
TEST(ParkingSystemTest, add_car_noexist){
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));

    ASSERT_EQ(parkingSystem.FindVehicleIndexByPlateNumber("AAA-BBBB"), 0);
}
*/

TEST(ParkingSystemTest, add_car_exist) {
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));
    ASSERT_THROW(
        parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB"))),
        std::invalid_argument);
}
/*
TEST(ParkingSystemTest, remove_car_exist){
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));
    parkingSystem.RemoveVehicle("AAA-BBBB");

    ASSERT_THROW(parkingSystem.FindVehicleIndexByPlateNumber("AAA-BBBB"),
std::invalid_argument);
}
*/

TEST(ParkingSystemTest, remove_car_noexist) {
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));
    parkingSystem.RemoveVehicle("AAA-BBBB");

    ASSERT_THROW(parkingSystem.RemoveVehicle(("AAA-BCCB")),
                 std::invalid_argument);
}

TEST(ParkingSystemTest, size) {
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));
    parkingSystem.RemoveVehicle("AAA-BBBB");

    ASSERT_EQ(parkingSystem.GetSize(), 0);
}

TEST(ParkingSystemTest, total1) {
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));
    parkingSystem.AddVehicle(
        std::shared_ptr<Vehicle>(new ElectricCar(5, "AAA-CCBB")));

    ASSERT_EQ(parkingSystem.GetTotalParkingPricePerHour(), 105);
}

TEST(ParkingSystemTest, total2) {
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));

    ASSERT_EQ(parkingSystem.GetTotalParkingPricePerHour(), 40);
}

TEST(ParkingSystemTest, one1) {
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(std::shared_ptr<Vehicle>(new Car("AAA-BBBB")));

    ASSERT_EQ(parkingSystem.CalculateParkingPrice("AAA-BBBB", 5), 200);
}

TEST(ParkingSystemTest, one2) {
    ParkingSystem parkingSystem;
    parkingSystem.AddVehicle(
        std::shared_ptr<Vehicle>(new ElectricMotorcycle(5, "AAA-BBBB")));

    ASSERT_EQ(parkingSystem.CalculateParkingPrice("AAA-BBBB", 5), 150);
}
// Add tests here