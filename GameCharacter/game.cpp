#include "game.hpp"
#include <vector>
#include <iostream>
using namespace std;
void Game::addCharacter(Character newChar)
{
    if (newChar.getHealth() < 0)
    {
        cout << "Error: for (" << newChar.getName() << ") health must be positive. " << endl;
        return;
    }
    if (newChar.getPower() < 0)
    {
        cout << "Error: for (" << newChar.getName() << ") power must be positive. " << endl;
        return;
    }

    characters.push_back(newChar);
}
void Game::PrintChar()
{
    for (auto &charr : characters)
    {
        charr.PrintInfo();
    }
}