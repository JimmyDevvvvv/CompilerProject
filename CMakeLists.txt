cmake_minimum_required(VERSION 3.26)
project(CompilerProject C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Engine)

add_executable(CompilerProject
        Engine/main.c)
