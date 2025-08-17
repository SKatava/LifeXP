#include "lifexp/Player.h"

Player::Player(std::string name, uint8_t age, uint16_t level, uint32_t xp ) : m_name(name), m_age(age), m_level(level), m_xp(xp) {
    calculateXpTreshold();
}

//---------------------------------------------------------------------------------------------------------------------------
//getters
//---------------------------------------------------------------------------------------------------------------------------

const std::string& Player::getName() const {
    return m_name;
}

uint8_t Player::getAge() const {
    return m_age;
}

uint16_t Player::getLevel() const {
    return m_level;
}

uint32_t Player::getXp() const {
    return m_xp;
}

uint32_t Player::getXpTreshold() const {
    return m_xpTreshold;
}

//---------------------------------------------------------------------------------------------------------------------------
//Level managment
//---------------------------------------------------------------------------------------------------------------------------

void Player::levelUp() {
    m_level++;
    m_xp -= m_xpTreshold;
    calculateXpTreshold();
    if(m_xp >= m_xpTreshold) {
        levelUp();
    }
}

//---------------------------------------------------------------------------------------------------------------------------
//Xp managment
//---------------------------------------------------------------------------------------------------------------------------

void Player::addXp(uint32_t xp) {
    m_xp += xp;
    if(m_xp >= m_xpTreshold) {
        levelUp();
    }
}

void Player::calculateXpTreshold() {
    m_xpTreshold = BASE_XP * m_level* m_level;
}


