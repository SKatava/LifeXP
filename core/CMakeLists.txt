set(NAME lifexp-core)

project(${NAME})

set(SOURCES
    src/main.cpp
    src/Player.cpp
    src/Skill.cpp
)

add_library(${NAME} STATIC ${SOURCES})

target_include_directories(${NAME} PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include    
)
