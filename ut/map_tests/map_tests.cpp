#include <gtest/gtest.h>
#include <map>

TEST(MapTest, Insert) {
    std::map<int, int> m;
    m[1] = 2;
    EXPECT_EQ(m.size(), 1);
    EXPECT_EQ(m[1], 2);
}

TEST(MapTest, Erase) {
    std::map<int, int> m = {{1, 2}, {3, 4}};
    m.erase(1);
    EXPECT_EQ(m.size(), 1);
    EXPECT_EQ(m.count(1), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
