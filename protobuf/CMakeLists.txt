cmake_minimum_required(VERSION 3.20.0)
project(Rental CXX)

find_package(Protobuf REQUIRED)
protobuf_generate_cpp(PROTOBUF_SRC PROTOBUF_HEADERS
    proto/msg.proto)

add_executable(Rental main.cpp ${PROTOBUF_SRC} ${PROTOBUF_HEADERS})

add_subdirectory(cars)
target_link_libraries(Rental PRIVATE cars protobuf::libprotobuf)
target_include_directories(Rental PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
