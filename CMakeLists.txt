# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.0)

# Name of the project
project(scalc)

# Add all the source files needed to build the executable
add_executable(scalc "src/main.cpp" "src/wakeup.cpp" "src/bedtime.cpp" "src/notany.cpp" "src/notany.h")