cmake_minimum_required(VERSION 3.15)
project(Render)

set(CMAKE_CXX_STANDARD 14)

add_executable(Render main.cpp vec3.h ray.h hitable.h sphere.h hitable_list.h camera.h material.h)