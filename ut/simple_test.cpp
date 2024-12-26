#include <gtest/gtest.h>
#include <iostream>

// Example test for addition
TEST(MathTest, Addition) {
    EXPECT_EQ(2 + 2, 4);
}

// Example test for subtraction
TEST(MathTest, Subtraction) {
    EXPECT_EQ(5 - 3, 2);
}

// Example test for multiplication
TEST(MathTest, Multiplication) {
    EXPECT_EQ(3 * 4, 12);
}

// Example test for division
TEST(MathTest, Division) {
    EXPECT_EQ(10 / 2, 5);
}

int main(int argc, char **argv) {
    std::cout << "Starting tests in file: " << __FILE__ << std::endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
