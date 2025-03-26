cmake_minimum_required(VERSION 3.10)

project(Hospital)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hospital main.cpp patient.cpp hospital.cpp)