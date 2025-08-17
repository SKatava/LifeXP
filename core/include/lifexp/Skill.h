#ifndef SKILL_STRUCT_H
#define SKILL_STRUCT_H

#include <string>
#include <cstdint>
#include <vector>

#include "Goal.h"

struct Skill {
    Skill(std::string setTitle) :title(setTitle) {}

    static constexpr uint8_t BASE_XP = 50;

    std::vector<Goal> goals;

    std::string title;
    uint16_t level = 1;
    uint32_t xp = 0;
    uint32_t xpTreshold = BASE_XP;

    void addGoal(const Goal& goal);
    void calculateXpTreshold();
    void addXp(uint32_t amount);
    bool canLevelUp() const;
    void levelUp();
};

#endif
