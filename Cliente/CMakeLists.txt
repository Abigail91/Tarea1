cmake_minimum_required(VERSION 3.14)
project(Cliente)



set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(Cliente main.cpp)