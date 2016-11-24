cmake_minimum_required(VERSION 2.8)
project(movie_rental)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp
)
add_executable(movie_rental ${SOURCE_FILES})

add_subdirectory(tests)
