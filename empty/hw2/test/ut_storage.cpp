#include <gtest/gtest.h>

#include "storage.hpp"

TEST(HW1, test_create_storage_with_vector_should_correctly) {
    Storage storage({"Chocolate", "Doritos", "Strawberries Cracker Taiwan"});

    ASSERT_EQ(storage.Size(), 3);
}

/* 補齊測試使測試覆蓋率達到 95% */