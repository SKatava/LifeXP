cmake_minimum_required(VERSION 3.31.1)

set(NAME LifeXP)
project(${NAME})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(core)
add_subdirectory(frontend)
#add_subdirectory(backend)
#add_subdirectory(tests)
