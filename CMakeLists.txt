cmake_minimum_required(VERSION 3.18.0)
project(Positions)

set(SOURCE_EXE main.cpp )
set(SOURCES Position.cpp List.cpp Position.h List.h)

add_executable(Positions ${SOURCE_EXE} ${SOURCES})
