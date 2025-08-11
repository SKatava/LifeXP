cmake_minimum_required(VERSION 3.31.1)

set(NAME LifeXP)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(${NAME})

cmake_policy(SET CMP0072 NEW)
set(OpenGL_GL_PREFERENCE GLVND)
find_package(OpenGL REQUIRED)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

include_directories(
    lib/glad/include
    lib/imgui
    lib/imgui/backends
)

set (SOURCES
    lib/glad/glad.c

    lib/imgui/imgui.cpp
    lib/imgui/imgui_draw.cpp
    lib/imgui/imgui_demo.cpp
    lib/imgui/imgui_tables.cpp
    lib/imgui/imgui_widgets.cpp
    lib/imgui/backends/imgui_impl_glfw.cpp 
    lib/imgui/backends/imgui_impl_opengl3.cpp


    src/main.cpp
)

add_executable(${NAME} ${SOURCES})

target_link_libraries(${NAME} PRIVATE OpenGL::GL glfw)
