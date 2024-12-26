
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

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

int main() {
    test_sort();
    test_reverse();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}