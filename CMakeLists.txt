cmake_minimum_required(VERSION 3.15)
project(blunderbuss)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(lib)
add_executable(blunderbuss main.cpp)

include(cmake/googletest.cmake)
fetch_googletest(
        ${PROJECT_SOURCE_DIR}/cmake
        ${PROJECT_BINARY_DIR}/googletest
)

enable_testing()
add_subdirectory(test)