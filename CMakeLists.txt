cmake_minimum_required(VERSION 3.8)
project(inheritance)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Person.cpp Person.h Student.cpp Student.h)
add_executable(inheritance ${SOURCE_FILES})