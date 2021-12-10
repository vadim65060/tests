cmake_minimum_required(VERSION 3.20)
project(case2 C)

set(CMAKE_C_STANDARD 11)

add_executable(case2 main.c CosFunc.c CosFunc.h ShFunc.c ShFunc.h)
