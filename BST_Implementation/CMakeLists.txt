cmake_minimum_required(VERSION 3.7)
project(BST_Implementation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BST.h BST.cpp)
add_executable(BST_Implementation ${SOURCE_FILES})