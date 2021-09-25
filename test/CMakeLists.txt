cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 20)

set(SOURCES
        ../marmot.cpp
        ../random_universe.cpp
        gmock-gtest-all.cc
        main.cpp
        marmot_test.cpp
)

include_directories(.)

find_package(Threads REQUIRED)

add_executable(${PROJECT_NAME}_test ${SOURCES})
target_link_libraries(${PROJECT_NAME}_test PRIVATE Threads::Threads)