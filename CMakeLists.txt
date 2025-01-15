cmake_minimum_required(VERSION 3.29)
project(Recommender_System)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Recommender_System
    recommandation.cpp
    recommandation.h
        main.cpp)
