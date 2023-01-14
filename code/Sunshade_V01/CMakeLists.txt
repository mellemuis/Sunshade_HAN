cmake_minimum_required(VERSION 3.5)

project(Sunshade_V01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Sunshade_V01 main.cpp Motor.cpp Motor.h Sunshade.cpp Sunshade.h Sensors.cpp Sensors.h Sensor_Inside.cpp Sensor_Inside.h Sensor_UV.cpp Sensor_UV.h Sensor_Outside.cpp Sensor_Outside.h test.h test.cpp)

install(TARGETS Sunshade_V01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
