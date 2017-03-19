cmake_minimum_required(VERSION 3.6)
project(4_8)

set(CMAKE_CXX_STANDARD 11)
add_definitions("-D_UNICODE")
set(SOURCE_FILES main.cpp)
add_executable(4_8 ${SOURCE_FILES})