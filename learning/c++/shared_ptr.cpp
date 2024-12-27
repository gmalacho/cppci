#include <gtest/gtest.h>
#include <memory>

class MyClass {
public:
    MyClass() { }
    ~MyClass() { }
    void display() { }
};

TEST(SharedPtrTest, BasicTest) {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    ASSERT_NE(ptr1, nullptr);
    ptr1->display();
    {
        std::shared_ptr<MyClass> ptr2 = ptr1;
        EXPECT_EQ(ptr2.use_count(), 2);
    }
    EXPECT_EQ(ptr1.use_count(), 1);
}

TEST(SharedPtrTest, ResetTest) {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    ASSERT_NE(ptr1, nullptr);
    ptr1->display();
    ptr1.reset();
    EXPECT_EQ(ptr1, nullptr);
}

TEST(SharedPtrTest, MultipleOwnersTest) {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    ASSERT_NE(ptr1, nullptr);
    {
        std::shared_ptr<MyClass> ptr2 = ptr1;
        std::shared_ptr<MyClass> ptr3 = ptr2;
        EXPECT_EQ(ptr1.use_count(), 3);
        EXPECT_EQ(ptr2.use_count(), 3);
        EXPECT_EQ(ptr3.use_count(), 3);
    }
    EXPECT_EQ(ptr1.use_count(), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
