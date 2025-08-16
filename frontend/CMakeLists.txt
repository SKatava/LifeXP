set(NAME lifexp-frontend)

project(${NAME})

include_directories(
    ${CMAKE_SOURCE_DIR}/core/include
    third_party/imgui
    third_party/backends
    third_party/glad/include
)

set(IMGUI_SOURCES
    third_party/imgui/imgui.cpp
    third_party/imgui/imgui_draw.cpp
    third_party/imgui/imgui_widgets.cpp
    third_party/imgui/imgui_tables.cpp
    third_party/imgui/backends/imgui_impl_glfw.cpp
    third_party/imgui/backends/imgui_impl_opengl3.cpp
)

set(GLAD_SOURCES
    third_party/glad/glad.c
)

set(FRONTEND_SOURCES
    src/main.cpp

    ${IMGUI_SOURCES}
    ${GLAD_SOURCES}
)

add_executable(${NAME} ${FRONTEND_SOURCES})

target_link_libraries(${NAME} lifexp-core)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
target_link_libraries(${NAME} OpenGL::GL glfw)
