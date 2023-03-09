cmake_minimum_required(VERSION 3.24)
project(CMakePlayground)

set(CMAKE_CXX_STANDARD 17)
# Tell cmake we want it to automate generating an export stub for the dll
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(StaticDemo static/StaticDemo.h static/StaticDemo.cpp)
add_executable(CMakePlayground main.cpp)
target_link_libraries(CMakePlayground StaticDemo)
add_library(DynamicDemo SHARED dynamic/DynamicDemo.h dynamic/DynamicDemo.cpp)
target_link_libraries(CMakePlayground DynamicDemo)
