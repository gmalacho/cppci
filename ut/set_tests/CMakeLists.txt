# Create an executable for set_tests
add_executable(set_tests set_tests.cpp)

# Link the GoogleTest library and pthread
target_link_libraries(set_tests ${GTEST_LIBRARIES} pthread)
