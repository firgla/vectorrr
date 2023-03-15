cmake_minimum_required(VERSION 3.0)
project(myvector)

set(HEADERS
    my/vector.h
)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE .)
target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_20)
