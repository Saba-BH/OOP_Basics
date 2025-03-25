#include "character.hpp"
#include <iostream>
using namespace std;
int Character::getHealth()
{
    return health;
}
int Character::getPower()
{
    return power;
}
string Character::getName()
{
    return name;
}

Character::Character(string charName, int charHealth, int charPower)
{
    name = charName;
    health = charHealth;
    power = charPower;
}
void Character::addSkills(string skillName, int level)
{

    if (level < 0)
    {
        cout << "Error: for (" << skillName << ") level must be positie." << endl;
        return;
    }
    skill[skillName] = level;
}
void Character::PrintInfo()
{
    cout << "Name : " << name << endl
         << "Health : " << health << endl
         << "Power : " << power << endl
         << "Skills : ";
    for (const auto &skills : skill)
    {
        cout << skills.first << "(lvl " << skills.second << ") ";
    }
    cout << endl;
}