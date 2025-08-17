#include <lifexp/Player.h>
#include <gtest/gtest.h>

// Test construction and getters
TEST(test_Player, ConstructorAndGetters) {
    Player p("Alice", 20, 1, 0);

    EXPECT_EQ(p.getName(), "Alice");
    EXPECT_EQ(p.getAge(), 20);
    EXPECT_EQ(p.getLevel(), 1);
    EXPECT_EQ(p.getXp(), 0);
    EXPECT_EQ(p.getXpTreshold(), 50); // 50 * level^2 = 50
}

// Test XP addition without level up
TEST(test_Player, AddXpNoLevelUp) {
    Player p("Bob", 25, 1, 0);
    p.addXp(30);

    EXPECT_EQ(p.getXp(), 30);
    EXPECT_EQ(p.getLevel(), 1);
}

// Test XP addition with level up
TEST(test_Player, AddXpLevelUp) {
    Player p("Charlie", 30, 1, 0);
    p.addXp(60); // Should level up once

    EXPECT_EQ(p.getLevel(), 2);
    EXPECT_EQ(p.getXp(), 10); // 60 - 50
    EXPECT_EQ(p.getXpTreshold(), 200); // 50 * 2^2 = 200
}

// Test multiple level-ups in one XP addition
TEST(test_Player, AddXpMultipleLevelUps) {
    Player p("Dave", 40, 1, 0);
    p.addXp(500); // Enough for multiple levels

    EXPECT_GT(p.getLevel(), 1);
    EXPECT_LT(p.getXp(), p.getXpTreshold());
}

// Test levelUp directly
TEST(test_Player, LevelUpFunction) {
    Player p("Eve", 22, 1, 50);
    p.levelUp();

    EXPECT_EQ(p.getLevel(), 2);
    EXPECT_EQ(p.getXp(), 0);
    EXPECT_EQ(p.getXpTreshold(), 200);
}

