cmake_minimum_required(VERSION 3.11)

project(Stack)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Stack
                main.cpp
                Calculator.cpp)
