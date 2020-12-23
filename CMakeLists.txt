cmake_minimum_required(VERSION 3.16)
project(example)

set(CMAKE_CXX_STANDARD 20)
include_directories(${PROJECT_SOURCE_DIR})  # Allows absolute paths: #include <util/bar/bar.h>
enable_testing()

add_subdirectory(lib)
add_subdirectory(test)  # enable_testing() used there
add_subdirectory(util)

add_executable(example main.cpp)
target_link_libraries(example algo)
