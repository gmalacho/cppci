#include <gtest/gtest.h>
#include <vector>

// Test for vector initialization
TEST(VectorTest, Initialization) {
    std::vector<int> vec = {1, 2, 3};
    EXPECT_EQ(vec.size(), 3);
    EXPECT_EQ(vec[0], 1);
    EXPECT_EQ(vec[1], 2);
    EXPECT_EQ(vec[2], 3);
}

// Test for vector push_back
TEST(VectorTest, PushBack) {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    EXPECT_EQ(vec.size(), 2);
    EXPECT_EQ(vec[0], 1);
    EXPECT_EQ(vec[1], 2);
}

// Test for vector pop_back
TEST(VectorTest, PopBack) {
    std::vector<int> vec = {1, 2, 3};
    vec.pop_back();
    EXPECT_EQ(vec.size(), 2);
    EXPECT_EQ(vec[0], 1);
    EXPECT_EQ(vec[1], 2);
}

// Test for vector clear
TEST(VectorTest, Clear) {
    std::vector<int> vec = {1, 2, 3};
    vec.clear();
    EXPECT_EQ(vec.size(), 0);
}
