cmake_minimum_required(VERSION 3.27)
project(Projekt_DLL)

set(CMAKE_CXX_STANDARD 17)

add_library(Projekt_DLL SHARED
        Country.cpp
        Countries.cpp
        Budget.cpp)


