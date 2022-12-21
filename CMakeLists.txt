cmake_minimum_required(VERSION 3.24)
project(simple_calculator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(simple_calculator
        calculator.cpp
        calculator.h
        main.cpp
        scientific.cpp
        scientific.h)
