cmake_minimum_required(VERSION 4.3)
project(Minou)

set(CMAKE_CXX_STANDARD 20)

add_executable(Minou main.cpp
        Cat.cpp
        Cat.h
        SiameseCat.cpp
        SiameseCat.h
        PersianCat.cpp
        PersianCat.h
        AlleyCat.cpp
        AlleyCat.h)
