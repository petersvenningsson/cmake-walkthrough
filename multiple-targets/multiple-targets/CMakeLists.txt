cmake_minimum_required(VERSION 3.20.0)
project(Rental CXX)

add_executable(Volvo volvo.cpp)
add_executable(Saab saab.cpp)

add_subdirectory(cars)
target_link_libraries(Saab PRIVATE cars)
target_link_libraries(Volvo PRIVATE cars)
