
cmake_minimum_required(VERSION 3.10)

# Add your test source files
add_executable(my_test test_main.cpp LoggerTest.cpp)

# Link Google Test libraries
target_link_libraries(my_test gtest gtest_main)
