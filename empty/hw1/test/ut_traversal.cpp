#include <gtest/gtest.h>

#include "traversal.hpp"

TEST(TraversalTest, TestExampleShouldReturnTrue){
    int arr[] = {2, 0, 1};
    int n = 3;

    int result = traversal(n, arr);

    ASSERT_EQ(result, true);
}

/* 撰寫測試，使測試覆蓋率大於 95% */