cmake_minimum_required(VERSION 3.16)

project(Cat LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Cat
    main.cpp
    Cat.cpp
    AlleyCat.cpp
    PersianCat.cpp
    Siamese.cpp
)

target_include_directories(Cat PRIVATE include)
