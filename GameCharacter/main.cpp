#include <iostream>
#include "game.hpp"
using namespace std;
int main()
{
    Game Bazi;

    Character hero("Batman", 100, 100);
    hero.addSkills("Flight", 10);
    hero.addSkills("Magic", 8);

    Character normal("Mario", 80, 50);
    normal.addSkills("Jump", 5);
    normal.addSkills("Invisible", -5);

    Character noob("Sonic", -8, 1);
    Character noob2("Mega Man", 50, -6);

    Bazi.addCharacter(hero);
    Bazi.addCharacter(normal);
    Bazi.addCharacter(noob);
    Bazi.addCharacter(noob2);
    Bazi.PrintChar();
    return 0;
}