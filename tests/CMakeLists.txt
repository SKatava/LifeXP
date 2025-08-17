set(NAME lifexp-tests)
project(${NAME})

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(${NAME}
    core/test_Player.cpp
    core/test_skill.cpp
    core/test_goal.cpp
    core/test_task.cpp
)

target_link_libraries(${NAME}
    gtest_main
    lifexp-core
)

include(GoogleTest)
gtest_discover_tests(${NAME})

