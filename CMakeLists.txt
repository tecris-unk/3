cmake_minimum_required(VERSION 3.29)
project(3 C)

set(CMAKE_C_STANDARD 23)

add_executable(3 main.c
        functions.c
        functions.h
        struct.h
        tasks.c
        serials.c
        serials.h
        mystring.c
        mystring.h
)
