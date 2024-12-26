cmake_minimum_required(VERSION 3.10)

# Set the project name
project(SimpleTest)

# Add an executable
add_executable(simple_test ut/simple_test.cpp)

# Add the Google Test framework
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link the Google Test framework
target_link_libraries(simple_test ${GTEST_LIBRARIES} pthread)