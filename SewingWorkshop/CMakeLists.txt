cmake_minimum_required(VERSION 3.31)
project(SewingWorkshop)

set(CMAKE_CXX_STANDARD 23)

add_executable(SewingWorkshop main.cpp
        Seamstress.cpp
        Seamstress.h
        SewingWorkshop.cpp
        SewingWorkshop.h)
