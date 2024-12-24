#include <gtest/gtest.h>

int main(int argc, char **argv) {
    // TEST bez dockera
    // TEST z dockerem


    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}