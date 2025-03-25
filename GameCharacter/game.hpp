#ifndef GAME_HPP
#define GAME_HPP
#include "character.hpp"
#include <iostream>
#include <vector>
using namespace std;
class Game
{
private:
    vector<Character> characters;

public:
    void addCharacter(Character);
    void PrintChar();
};
#endif