cmake_minimum_required(VERSION 3.20)

set(CMAKE_MODULE_PATH
        ${CMAKE_MODULE_PATH}
        ${CMAKE_SOURCE_DIR}/cmake/modules
        )

project(Computer-Graphics)

set(CMAKE_CXX_STANDARD 17)

include(FindExtPackages)

add_subdirectory(src)
