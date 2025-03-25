cmake_minimum_required(VERSION 3.10)

project(GameApp)

set(CMAKE_CXX_STANDARD 17)

add_executable(game main.cpp character.cpp game.cpp)