#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <gtest/gtest.h>
#include <iostream>

void test_sort() {
    std::vector<int> v = {4, 2, 3, 1, 5};
    std::sort(v.begin(), v.end());
    assert((v == std::vector<int>{1, 2, 3, 4, 5}));
}

void test_reverse() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::reverse(v.begin(), v.end());
    assert((v == std::vector<int>{5, 4, 3, 2, 1}));
}

int main(int argc, char **argv) {
    std::cout << "Starting tests..." << std::endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
