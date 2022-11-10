cmake_minimum_required(VERSION 3.18)

# Set the project name
project(blackbox-common)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ./out)

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

if (BUILD_TESTS)
    set(TEST_SOURCES tests/run_tests.cpp
                     tests/content_test.cpp
                     tests/headers_test.cpp
                     tests/packet_test.cpp
                     tests/config_test.cpp
                     src/packet/content.cpp
                     src/packet/headers.cpp
                     src/packet/packet.cpp
                     src/packet/serial_data_transfer.cpp
                     src/serial/serialib.cpp
                     src/config.cpp
                     src/profiling/instrumentation.cpp
                     )

    add_executable(tests ${TEST_SOURCES})
endif()

include_directories(include/)

add_library(${PROJECT_NAME} ${TARGET_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out
)


add_subdirectory(libs/spdlog)
target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog)