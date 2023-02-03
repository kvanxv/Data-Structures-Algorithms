cmake_minimum_required(VERSION 3.24)
project(DataStructuresAlgorithms)

set(CMAKE_CXX_STANDARD 23)

add_executable(DataStructuresAlgorithms
        Node.h
        Stack.h
        Stack.cpp
        parenthesis2.cpp Queue.h Queue.cpp BinarySearch.cpp)
