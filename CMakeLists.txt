cmake_minimum_required(VERSION 3.15)
project(cpp-template CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(cpp-template src/cpp-template.cpp src/main.cpp)

install(TARGETS cpp-template DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
