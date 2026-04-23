cmake_minimum_required(VERSION 3.20)
project(pattern-language)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(vendor)