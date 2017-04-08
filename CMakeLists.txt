# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.1)
project(NativeMatters)

message(STATUS "Android build!")
add_subdirectory("android/app/src/main/cpp")
