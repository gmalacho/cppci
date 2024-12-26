#include <gtest/gtest.h>
#include <set>

TEST(SetTest, Insert) {
    std::set<int> s;
    s.insert(1);
    EXPECT_EQ(s.size(), 1);
    EXPECT_EQ(*s.begin(), 1);
}

TEST(SetTest, Erase) {
    std::set<int> s = {1, 2, 3};
    s.erase(2);
    EXPECT_EQ(s.size(), 2);
    EXPECT_EQ(s.count(2), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
