cmake_minimum_required(VERSION 3.17)
project(ascii1)

set(CMAKE_CXX_STANDARD 20)

add_executable(ascii1 source/main.cpp source/Battle.cpp header/header.hpp source/enemies.cpp source/hero.cpp)