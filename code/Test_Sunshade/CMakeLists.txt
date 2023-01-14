cmake_minimum_required(VERSION 3.5)

project(Test_Sunshade LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Test_Sunshade main.cpp sunshade_test.h sunshade_test.cpp)

install(TARGETS Test_Sunshade
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
