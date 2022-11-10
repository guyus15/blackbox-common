cmake_minimum_required(VERSION 3.18)

# Set the project name
project(blackbox-common)

set(CMAKE_CXX_STANDARD 17)

set(TARGET_SOURCES src/packet/content.cpp
                   src/packet/headers.cpp
                   src/packet/packet.cpp
                   src/packet/serial_data_transfer.cpp
                   src/packet/packet_types.cpp
                   src/packet/packet_decoding.cpp
                   src/serial/serialib.cpp
                   src/config.cpp
                   src/logger.cpp
                   src/clock.cpp
                   src/profiling/instrumentation.cpp
                   )

include_directories(include/)

add_library(${PROJECT_NAME} ${TARGET_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out
)


add_subdirectory(libs/spdlog)
target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog)