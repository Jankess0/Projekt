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
        CountryWindow.cpp
        CountryWindow.h
        StartWindow.cpp
        StartWindow.h)

include_directories(${PROJECT_SOURCE_DIR}/include)

target_link_libraries(Projekt
        Qt::Core
        Qt::Gui
        Qt::Widgets
        ${PROJECT_SOURCE_DIR}/lib/libProjekt_DLL.dylib

)

