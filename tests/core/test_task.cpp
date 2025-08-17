#include <gtest/gtest.h>
#include <lifexp/Task.h>

TEST(TaskTest, DefaultCompletion) {
    Task t{"Do something"};
    EXPECT_FALSE(t.completed);
    EXPECT_EQ(t.description, "Do something");
}

TEST(TaskTest, MarkCompleted) {
    Task t{"Do something"};
    t.completed = true;
    EXPECT_TRUE(t.completed);
}

