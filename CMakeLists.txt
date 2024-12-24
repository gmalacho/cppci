cmake_minimum_required(VERSION 3.10)
project(GoogleTestExample)

# Use C++17 or newer
set(CMAKE_CXX_STANDARD 17)

# Add debugging symbols
set(CMAKE_BUILD_TYPE Debug)

# Add Google Test
find_package(GTest REQUIRED)

# Add test source files
add_executable(runTests main.cpp sample_test.cpp)

# Link Google Test libraries
target_link_libraries(runTests GTest::gtest GTest::gtest_main)
