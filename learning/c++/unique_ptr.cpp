#include <iostream>
#include <memory>
#include <gtest/gtest.h>

// ...existing code...

TEST(UniquePtrTest, Basic) {
    std::unique_ptr<int> ptr1(new int(10));
    ASSERT_NE(ptr1, nullptr);
    EXPECT_EQ(*ptr1, 10);
}

TEST(UniquePtrTest, Move) {
    std::unique_ptr<int> ptr1(new int(20));
    std::unique_ptr<int> ptr2 = std::move(ptr1);
    ASSERT_EQ(ptr1, nullptr);
    ASSERT_NE(ptr2, nullptr);
    EXPECT_EQ(*ptr2, 20);
}

TEST(UniquePtrTest, Reset) {
    std::unique_ptr<int> ptr1(new int(30));
    ptr1.reset(new int(40));
    ASSERT_NE(ptr1, nullptr);
    EXPECT_EQ(*ptr1, 40);
}

TEST(UniquePtrTest, Release) {
    std::unique_ptr<int> ptr1(new int(50));
    int* rawPtr = ptr1.release();
    ASSERT_EQ(ptr1, nullptr);
    ASSERT_NE(rawPtr, nullptr);
    EXPECT_EQ(*rawPtr, 50);
    delete rawPtr;
}

TEST(UniquePtrTest, Swap) {
    std::unique_ptr<int> ptr1(new int(60));
    std::unique_ptr<int> ptr2(new int(70));
    std::swap(ptr1, ptr2);
    ASSERT_NE(ptr1, nullptr);
    ASSERT_NE(ptr2, nullptr);
    EXPECT_EQ(*ptr1, 70);
    EXPECT_EQ(*ptr2, 60);
}

TEST(UniquePtrTest, CustomDeleter) {
    bool deleterCalled = false;
    auto deleter = [&deleterCalled](int* ptr) {
        deleterCalled = true;
        delete ptr;
    };
    {
        std::unique_ptr<int, decltype(deleter)> ptr(new int(80), deleter);
        ASSERT_NE(ptr, nullptr);
        EXPECT_EQ(*ptr, 80);
    }
    EXPECT_TRUE(deleterCalled);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
