#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <map>
using namespace std;
class Character
{
private:
    string name;
    int health;
    int power;
    map<string, int> skill;

public:
    Character(string, int, int);
    int getHealth();
    int getPower();
    string getName();
    void addSkills(string, int);
    void PrintInfo();
};
#endif