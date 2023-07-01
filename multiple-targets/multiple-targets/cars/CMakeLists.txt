add_library(cars OBJECT
    car.cpp
)
target_include_directories(cars PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
