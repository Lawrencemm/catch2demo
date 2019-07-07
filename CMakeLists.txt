cmake_minimum_required(VERSION 3.14)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_BINARY_DIR})

find_package(Catch2 REQUIRED)

add_executable(test main.cpp test.cpp)
target_link_libraries(test Catch2::Catch2)
