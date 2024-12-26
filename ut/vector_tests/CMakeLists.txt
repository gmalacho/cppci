cmake_minimum_required(VERSION 3.10)
project(VectorTests)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the test source files
set(TEST_SOURCES
    vector_tests.cpp
    # Add other test files here
)

# Create an executable for the tests
add_executable(vector_tests ${TEST_SOURCES})

# Link the GoogleTest library and gtest_main
target_link_libraries(vector_tests ${GTEST_LIBRARIES} GTest::gtest_main pthread)
