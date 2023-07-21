cmake_minimum_required(VERSION 3.22.0)

project(lib_work_3)

add_executable(my_lib_work_3 work_2.cpp)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(my_lib_work_unical SHARED  lib_dinamic_work_2.h lib_dinamic_work_2.cpp)

target_link_libraries(my_lib_work_3 my_lib_work_unical)
