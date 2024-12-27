cmake_minimum_required(VERSION 3.10)
project(MainProject)

# Use C++17 or newer
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

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
target_link_libraries(main)

# Enable testing
enable_testing()

# Add subdirectory for C++ tests
add_subdirectory(learning/c++)
