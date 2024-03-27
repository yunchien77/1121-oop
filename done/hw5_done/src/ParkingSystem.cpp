

#include "../include/ParkingSystem.hpp"
#include <stdexcept>

int ParkingSystem::FindVehicleIndexByPlateNumber(std::string plateNumber) {
    // 根據車牌號碼找到車輛在 vector 中的索引
    // 如果找到返回索引值，如果未找到返回 -1
    for (size_t i = 0; i < vehicles.size(); ++i) {
        if (vehicles[i]->GetPlateNumber() == plateNumber) {
            return i;
        }
    }
    return -1; // not found
}

int ParkingSystem::GetChargingFeeByPlateNumber(std::string plateNumber) {
    // 根據車牌號碼計算充電電費
    int index = FindVehicleIndexByPlateNumber(plateNumber);
    if (index != -1) {
        int batteryCapacity =
            std::dynamic_pointer_cast<ElectricVehicle>(vehicles[index])
                ->GetBatteryCapacity();
        int currentPower =
            std::dynamic_pointer_cast<ElectricVehicle>(vehicles[index])
                ->GetCurrentPower();
        return (batteryCapacity - currentPower) * 5;
    } else {
        throw std::invalid_argument(
            "Vehicle with given plate number does not exist.");
    }
}

ParkingSystem::ParkingSystem() {}

void ParkingSystem::AddVehicle(std::shared_ptr<Vehicle> vehicle) {
    // 檢查是否已存在相同車牌的車輛
    for (const auto &v : vehicles) {
        if (v->GetPlateNumber() == vehicle->GetPlateNumber()) {
            throw std::invalid_argument(
                "Vehicle with same plate number already exists.");
        }
    }
    // 如果沒有相同車牌的車輛，則將車輛加入停車場
    vehicles.push_back(vehicle);
}

void ParkingSystem::RemoveVehicle(std::string plateNumber) {
    int index = FindVehicleIndexByPlateNumber(plateNumber);
    if (index != -1) {
        vehicles.erase(vehicles.begin() + index);
    } else {
        throw std::invalid_argument(
            "Vehicle with given plate number does not exist.");
    }
}

int ParkingSystem::GetTotalParkingPricePerHour() {
    // 計算每小時停車場的總收益，包括電動車的充電電費
    // 可以逐輛車計算停車費用，然後總和返回
    int totalIncome = 0;
    for (const auto &vehicle : vehicles) {
        totalIncome += CalculateParkingPrice(vehicle->GetPlateNumber(),
                                             1); // Assuming one hour
    }
    return totalIncome;
}

int ParkingSystem::CalculateParkingPrice(std::string plateNumber, int hour) {
    // 根據車牌號碼找到車輛，計算特定車輛停放 hour 小時後的繳費金額
    // 考慮到不同車輛類型的不同計費方式，並計算電費
    int index = FindVehicleIndexByPlateNumber(plateNumber);
    if (index != -1) {
        int price = vehicles[index]->GetPrice() * hour;
        if (std::shared_ptr<ElectricVehicle> electricVehicle =
                std::dynamic_pointer_cast<ElectricVehicle>(vehicles[index])) {
            price += GetChargingFeeByPlateNumber(plateNumber);
        }
        return price;
    } else {
        throw std::invalid_argument(
            "Vehicle with given plate number does not exist.");
    }
}

int ParkingSystem::GetSize() {
    return vehicles.size();
}