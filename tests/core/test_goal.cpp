#include <gtest/gtest.h>
#include <lifexp/Goal.h>

TEST(GoalTest, AddTaskAndCompletion) {
    Goal g("Learn C++ Basics");

    g.addTask(Task{"Read variables"});
    g.addTask(Task{"Write first program"});

    EXPECT_FALSE(g.isCompleted());

    // Mark all tasks completed
    for(auto& t : g.tasks)
        t.completed = true;

    EXPECT_TRUE(g.isCompleted());
}

TEST(GoalTest, Description) {
    Goal g("Learn C++");
    EXPECT_EQ(g.description, "Learn C++");
}

