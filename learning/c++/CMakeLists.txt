cmake_minimum_required(VERSION 3.10)

# Set the project name
project(TypeIdTests)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the GoogleTest framework
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add the source files
add_executable(TypeIdTests typeid.cpp)

# Link the GoogleTest libraries
target_link_libraries(TypeIdTests ${GTEST_LIBRARIES} pthread)

# Enable testing
enable_testing()

# Add a test
add_test(NAME TypeIdTests COMMAND TypeIdTests)
