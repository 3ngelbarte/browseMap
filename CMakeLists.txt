cmake_minimum_required(VERSION 3.0)

project(browsemap)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -g -ansi -pedantic -lsfml-graphics -lsfml-window -lsfml-system")
set(SFML_LIB{PATH} SFML-2.4.2/lib)
set(SFML_INCLUDES{PATH} SFML-2.4.2/include)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SFML REQUIRED sfml-all)
include_directories(include/ ${SFML_INCLUDES})

add_executable(browsemap src/browsemap.cpp)
target_link_libraries(browsemap ${SFML_LIB})
