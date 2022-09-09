cmake_minimum_required(VERSION 3.23)
project(alx_low_level_programming C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(0x00-hello_world)

add_executable(alx_low_level_programming
        0x00-hello_world/101-quote.c
        0x00-hello_world/4-puts.c
        0x00-hello_world/5-printf.c
        0x00-hello_world/6-size.c)
