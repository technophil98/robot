cmake_minimum_required(VERSION 3.4)
project(serieViaUSB)

set(CMAKE_CXX_STANDARD 11)

file(GLOB ${PROJECT_NAME}_SRCS
        "*.h"
        "*.cc"
        )

add_executable(serieViaUSB ${${PROJECT_NAME}_SRCS})
target_link_libraries(serieViaUSB usb)

install(TARGETS serieViaUSB DESTINATION bin)