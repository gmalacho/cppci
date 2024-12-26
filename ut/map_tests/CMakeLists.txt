
# Create an executable for map_tests
add_executable(map_tests map_tests.cpp)

# Link the GoogleTest library and pthread
target_link_libraries(map_tests ${GTEST_LIBRARIES} pthread)