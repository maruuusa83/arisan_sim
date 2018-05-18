# Copyright (c) 2018 Daichi Teruya @maruuusa83 
# Released under the MIT License
# https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE

cmake_minimum_required(VERSION 2.8)

set(CMAKE_VERBOSE_MAKEFILE 1)

add_definitions(-DDEBUG)

if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-Wall -std=c++11 -fopenmp")
endif()

include_directories(include)

# tests
if (NOT WITHOUT_TEST)
    include(cmake/gtest.cmake)
    enable_testing()
    add_subdirectory(test)
endif()

add_subdirectory(src)

add_executable(simulation src/simulation.cpp)
target_link_libraries(simulation
    arisan_sim
    )
