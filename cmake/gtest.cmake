# Copyright (c) 2018 Daichi Teruya @maruuusa83 
# Released under the MIT license
# https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE

cmake_minimum_required(VERSION 2.8)

include(ExternalProject)

set(GTEST_ROOT ${PROJECT_BINARY_DIR}/GoogleTest)

ExternalProject_add(
    GoogleTest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.8.0
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${GTEST_ROOT}
    )

include_directories(${GTEST_ROOT}/include)
message(STATUS ${GTEST_ROOT})

add_library(gtest STATIC IMPORTED)
set_property(
    TARGET gtest
    PROPERTY IMPORTED_LOCATION ${GTEST_ROOT}/lib/libgmock.a
    )
add_library(gtest_main STATIC IMPORTED)
set_property(
    TARGET gtest_main
    PROPERTY IMPORTED_LOCATION ${GTEST_ROOT}/lib/libgmock_main.a
    )

# file(COPY ${CMAKE_SOURCE_DIR}/test/samplecodes DESTINATION ${CMAKE_BINARY_DIR}/test/)

