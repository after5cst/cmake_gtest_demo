cmake_minimum_required(VERSION 3.18.2) # Set your version.
# If you don't, wou'll get a LNK1169 error and many others (don't know why)

project(test_example)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} test.cpp)

add_subdirectory(googletest)
add_subdirectory(example)

target_link_libraries(${PROJECT_NAME} PUBLIC example_lib gtest gtest_main gmock gmock_main)

include(GoogleTest) # To use gtest_discover_tests

gtest_discover_tests(${PROJECT_NAME}) # Runs GTest with CTest
