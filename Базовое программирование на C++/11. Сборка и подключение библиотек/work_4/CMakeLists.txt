cmake_minimum_required(VERSION 3.22.0)

project(lib_work_4)

add_executable(my_work_4_unicalname work_4.cpp)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(my_unical_name SHARED  lib_dinamic_work_4.h lib_dinamic_work_4.cpp)

target_link_libraries(my_work_4_unicalname my_unical_name)