cmake_minimum_required(VERSION 3.10)
project(GoogleTestExample)

# Use C++17 or newer
set(CMAKE_CXX_STANDARD 17)

# Add debugging symbols
set(CMAKE_BUILD_TYPE Debug)

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Enable debug information
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")

# Add Google Test
find_package(GTest REQUIRED)

# Add test source files
add_executable(main main.cpp)

# Link Google Test libraries
target_link_libraries(main GTest::gtest GTest::gtest_main)

# Add subdirectory for unit tests
add_subdirectory(ut)
