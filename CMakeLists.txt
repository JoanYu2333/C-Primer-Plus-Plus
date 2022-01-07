cmake_minimum_required(VERSION 3.0.0)
project(main VERSION 0.1.0)

file(GLOB HEAD_FILE ./Chapter_2/*.h)
file(GLOB SRC_FILE ./Chapter_2/*.cpp)

include_directories(${HEAD_FILE})

add_executable(${PROJECT_NAME} ${SRC_FILE})

