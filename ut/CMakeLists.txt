cmake_minimum_required(VERSION 3.10)
project(UnitTests)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Create an executable for running all tests
add_executable(run_ut run_ut.cpp)

# Link the GoogleTest library and pthread
target_link_libraries(run_ut ${GTEST_LIBRARIES} pthread)

# Add the subdirectory for vector_tests
add_subdirectory(vector_tests)
