cmake_minimum_required(VERSION 3.8)
project(clion)

set(CMAKE_CXX_STANDARD 11)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})



set(SOURCE_FILES src/main.cpp)
add_executable(clion ${SOURCE_FILES})

set(TEST_DIR tests)
add_executable(tests ${TEST_DIR}/*.cpp)
