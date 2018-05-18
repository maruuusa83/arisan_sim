# Copyright (c) 2018 Daichi Teruya @maruuusa83 
# Released under the MIT License
# https://github.com/maruuusa83/arisan_sim/blob/master/LICENSE

cmake_minimum_required(VERSION 2.8)

add_library(arisan_sim STATIC
    Task.cpp
    Node.cpp
    Environment.cpp)

