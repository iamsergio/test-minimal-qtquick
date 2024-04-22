
cmake_minimum_required(VERSION 3.7)
project(minimal)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIRS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 NO_MODULE COMPONENTS Widgets Quick QuickControls2)
add_executable(minimal main.cpp)

target_link_libraries(minimal PRIVATE Qt6::Quick Qt6::Gui Qt6::Network Qt6::Widgets Qt6::QuickControls2)
