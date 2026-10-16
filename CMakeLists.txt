cmake_minimum_required(VERSION 4.1)
project(untitled3)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled3 main/main.cpp
        includes/Graf.h
        src/Graf.cpp
)
target_include_directories(untitled3 PRIVATE
        ${CMAKE_SOURCE_DIR}/includes)