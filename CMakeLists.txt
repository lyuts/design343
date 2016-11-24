cmake_minimum_required(VERSION 3.6)
project(movie_rental)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp movie.h transFactory.cpp transaction.cpp transaction.h item.cpp item.h borrow.cpp borrow.h return.cpp return.h)
add_executable(movie_rental ${SOURCE_FILES})

add_subdirectory(tests)
