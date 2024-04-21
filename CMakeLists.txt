cmake_minimum_required(VERSION 3.23)
project(eoop_project)

set(CMAKE_CXX_STANDARD 11)

add_executable(eoop_project main.cpp
        School.cpp
        School.h
        Lecturer.cpp
        Lecturer.h
        Course.cpp
        Course.h
        Student.cpp
        Student.h
        test.cpp)
