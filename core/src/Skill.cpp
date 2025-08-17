#include "lifexp/Skill.h"

void Skill::addGoal(const Goal& goal){
    goals.push_back(goal);
}

void Skill::calculateXpTreshold() {
    xpTreshold = BASE_XP * level * level;
}

void Skill::addXp(uint32_t amount) {
    xp += amount;
    while(canLevelUp()){
        levelUp();
        calculateXpTreshold();
    }
}

bool Skill::canLevelUp() const {
    if(xp >= xpTreshold) {return true;}
    return false;
}

void Skill::levelUp() {
    level++;
    xp -= xpTreshold;
}
