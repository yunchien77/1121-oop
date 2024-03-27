#include <gtest/gtest.h>

#include "storage.hpp"

TEST(HW2, test_create_storage_with_vector_should_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

    ASSERT_EQ(storage.Size(), 3);
}

TEST(HW2, test_create_storage_with_stringarr_should_getSize_correctly) {
    std::string snacks[] = {"Cake",         "Ice-cream", "Deadlines", "Sleep",
                            "WantToGoHome", "Fire",      "Sun"};
    Storage storage(7, snacks);

    ASSERT_EQ(storage.Size(), 7);
}

TEST(HW2, test_create_storage_with_vector_should_add_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});
    storage.Add("Blueberry");
    storage.Add("HotDog");

    ASSERT_EQ(storage.Size(), 5);
}

TEST(HW2, test_create_storage_with_vector_should_set_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});
    storage.Set(2, "Tasks");

    ASSERT_EQ(storage.Size(), 3);
    ASSERT_EQ(storage.Get(0), "Chocolate");
    ASSERT_EQ(storage.Get(1), "Doritos");
    ASSERT_EQ(storage.Get(2), "Tasks");
}

TEST(HW2, test_create_storage_with_vector_should_get_null) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

    ASSERT_EQ(storage.Get(3), "");
}

TEST(HW2, test_create_storage_with_vector_should_eat_correctly) {
    Storage storage({"Lemon", "Doritos", "Common Sense"});
    storage.Eat(1);

    ASSERT_EQ(storage.Get(1), "");
}

TEST(HW2, test_create_storage_with_vector_should_eat_failed) {
    Storage storage({"Lemon", "Doritos", "Common Sense", "Turtles"});
    storage.Eat(4);

    ASSERT_EQ(storage.Get(0), "Lemon");
    ASSERT_EQ(storage.Get(1), "Doritos");
    ASSERT_EQ(storage.Get(2), "Common Sense");
    ASSERT_EQ(storage.Get(3), "Turtles");
}

/* 補齊測試使測試覆蓋率達到 95% */