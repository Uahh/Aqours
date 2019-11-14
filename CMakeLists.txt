cmake_minimum_required(VERSION 3.14)
project(Aqours)

set(CMAKE_CXX_STANDARD 11)

add_executable(Aqours main.cpp common.h class/idol.cpp class/idol.h class/subgroup.cpp class/subgroup.h)