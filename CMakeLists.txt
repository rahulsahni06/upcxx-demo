cmake_minimum_required(VERSION 3.24)
project(upcxx_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(upcxx_demo main.cpp)

target_include_directories (upcxx_demo PRIVATE /Users/rahul/upcxx/include/)
