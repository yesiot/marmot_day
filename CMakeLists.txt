cmake_minimum_required(VERSION 3.17)
project(marmot_day)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(test)

set(SOURCES
        main.cpp
        marmot.cpp
        random_universe.cpp
        universe.h
        universe_factory.cpp
        )

add_executable(${PROJECT_NAME} ${SOURCES})