cmake_minimum_required(VERSION 3.10)
project(UnitTests)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add the subdirectory for vector_tests
add_subdirectory(vector_tests)

# Add the subdirectory for set_tests
add_subdirectory(set_tests)

# Add the subdirectory for map_tests
add_subdirectory(map_tests)
