#include <gtest/gtest.h>

#include "traversal.hpp"

TEST(TraversalTest, TestExampleShouldReturnTrue) {
    int arr[] = {2, 0, 1};
    int n = 3;

    int result = traversal(n, arr);

    ASSERT_EQ(result, true);
}

TEST(TraversalTest, TestExampleShouldReturnTrue1) {
    int arr[] = {3, 0, 1, 2};
    int n = 4;

    int result = traversal(n, arr);

    ASSERT_EQ(result, true);
}

TEST(TraversalTest, TestExampleShouldReturnFalse2) {
    int arr[] = {4, 4, 1, 3, 0, 2};
    int n = 6;

    int result = traversal(n, arr);

    ASSERT_EQ(result, false);
}

TEST(TraversalTest, TestExampleShouldReturnFalse3) {
    int arr[] = {1, 5, 2, 3, 4};
    int n = 5;

    int result = traversal(n, arr);

    ASSERT_EQ(result, false);
}

TEST(TraversalTest, TestExampleShouldReturnFalse4) {
    int arr[] = {0, 1, 2, 3};
    int n = 4;

    int result = traversal(n, arr);

    ASSERT_EQ(result, false);
}

/* 撰寫測試，使測試覆蓋率大於 95% */