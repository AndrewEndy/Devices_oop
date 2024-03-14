cmake_minimum_required(VERSION 3.26)
project(DevicesOOP)

set(CMAKE_CXX_STANDARD 23)

add_executable(DevicesOOP main.cpp
        Keyboard.h
        Keyboard.cpp
        Mouse.h
        Mouse.cpp
        Headphones.h
        Headphones.cpp
        MechanicKeyboard.cpp
        MechanicKeyboard.h
        InEarHeadphones.cpp
        InEarHeadphones.h
        GamingMouse.cpp
        GamingMouse.h
        Printable.cpp
        Printable.h)
