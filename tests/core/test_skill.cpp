#include <gtest/gtest.h>
#include <lifexp/Skill.h>

TEST(SkillTest, AddGoals) {
    Skill s("Programming");
    Goal g1("Learn Basics");
    Goal g2("Advanced C++");

    s.addGoal(g1);
    s.addGoal(g2);

    EXPECT_EQ(s.goals.size(), 2);
    EXPECT_EQ(s.goals[0].description, "Learn Basics");
    EXPECT_EQ(s.goals[1].description, "Advanced C++");
}

TEST(SkillTest, Name) {
    Skill s("Programming");
    EXPECT_EQ(s.title, "Programming");
}

