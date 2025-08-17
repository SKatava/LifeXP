#ifndef PLAYER_CLASS_H
#define PLAYER_CLASS_H

#include <string>
#include <cstdint>
#include <vector>

#include "Skill.h"

class Player{
    public:
    
        static constexpr uint8_t BASE_XP = 50;

        Player(std::string name, uint8_t age, uint16_t lvl, uint32_t xp);

        //getters
        const std::string& getName() const;
        uint8_t getAge() const;
        uint16_t getLevel() const;
        uint32_t getXp() const;
        uint32_t getXpTreshold() const;
        const std::vector<Skill>& getSkills() const;

        //Lvl management
        void levelUp();

        //Xp management
        void addXp(uint32_t xp);
        void calculateXpTreshold();

        //Skills management
        void addSkill(const Skill& skill);


    private:
        std::string m_name;
        uint8_t m_age;
        uint16_t m_level;
        uint32_t m_xp;
        uint32_t m_xpTreshold;
        
        std::vector<Skill> m_skills;
};

#endif
