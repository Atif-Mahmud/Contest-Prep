cmake_minimum_required(VERSION 3.8)
project(CCC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES 96s1.h main.cpp 17s1.h "Optimal Solution/17s1.h" 17s2.h 17s3.h)
add_executable(CCC ${SOURCE_FILES})