cmake_minimum_required(VERSION 3.26)
project(Clicker)

set(CMAKE_CXX_STANDARD 17)

add_executable(Clicker main.cpp
        Controller.cpp
        Controller.h
        Model.cpp
        Model.h
        View.cpp
        View.h)