cmake_minimum_required(VERSION 3.16)
project(threadSample)

set(CMAKE_CXX_STANDARD 14)

add_executable(threadSample main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")