cmake_minimum_required(VERSION 3.10)

# Set the project name
project(test_typeid)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the GoogleTest framework
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Get all .cpp files in the current directory
file(GLOB CPP_FILES "*.cpp")

foreach(CPP_FILE ${CPP_FILES})
    # Get the file name without the extension
    get_filename_component(FILE_NAME ${CPP_FILE} NAME_WE)
    
    # Add the executable
    add_executable(${FILE_NAME} ${CPP_FILE})
    
    # Link the GoogleTest libraries
    target_link_libraries(${FILE_NAME} ${GTEST_LIBRARIES} pthread)
    
    # Add a test
    add_test(NAME ${FILE_NAME} COMMAND ${FILE_NAME})
endforeach()

# Enable testing
enable_testing()
