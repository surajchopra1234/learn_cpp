cmake_minimum_required(VERSION 3.28)
project(learn_cpp)

set(CMAKE_CXX_STANDARD 26)

add_executable(learn_cpp main.cpp
        classes/employee.cpp
        classes/employee.h
        classes/game.cpp
        classes/game.h
        classes/team.cpp
        classes/team.h
        classes/player.cpp
        classes/player.h
)
