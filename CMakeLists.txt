cmake_minimum_required(VERSION 4.0)
project(Cpp_Examples)

set(CMAKE_CXX_STANDARD 14)

include_directories("Constructor and Methods")

add_executable(Cpp_Examples
        "Constructor and Methods/Person.cpp"
        "Constructor and Methods/Person.h")
