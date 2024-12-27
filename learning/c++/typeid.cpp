#include <iostream>
#include <typeinfo>
#include <cassert>
#include <gtest/gtest.h>

class Base {
public:
    virtual ~Base() = default;
};

class Derived : public Base {};

TEST(TypeIdTest, BasicTypes) {
    int a = 5;
    double b = 3.14;
    EXPECT_EQ(typeid(a), typeid(int));
    EXPECT_EQ(typeid(b), typeid(double));
}

TEST(TypeIdTest, Polymorphism) {
    Base* base = new Base();
    Base* derived = new Derived();
    EXPECT_EQ(typeid(*base), typeid(Base));
    EXPECT_EQ(typeid(*derived), typeid(Derived));
    delete base;
    delete derived;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
