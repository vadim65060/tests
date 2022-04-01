cmake_minimum_required(VERSION 3.21)
project(case3 C)

set(CMAKE_C_STANDARD 23)

add_executable(case3 main.c ArrayReader.c ArrayReader.h ArrayProcessing.c ArrayProcessing.h)
