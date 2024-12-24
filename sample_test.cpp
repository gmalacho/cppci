#include <gtest/gtest.h>

// Function to test: simple addition
int add(int a, int b) {
    return a + b;
}

// Test case for the `add` function
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);  // 2 + 3 = 5
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);  // -2 + -3 = -5
}

TEST(AdditionTest, MixedNumbers) {
    EXPECT_EQ(add(-2, 3), 1);  // -2 + 3 = 1
}