cmake_minimum_required(VERSION 3.27)
project(Projekt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/kamil/Qt/6.7.0/macos/lib/cmake/Qt6")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Projekt main.cpp
        StartWindow.cpp
        StartWindow.h
        Countries.cpp
        Countries.h
        Country.cpp
        Country.h
        CountryWindow.cpp
        CountryWindow.h
        Budget.cpp
        Budget.h)
target_link_libraries(Projekt
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

