add_library(cars OBJECT
    car.cpp
)
add_library(garage::cars ALIAS cars)

target_include_directories(cars PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
