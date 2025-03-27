#ifndef SKY_HPP
#define SKY_HPP
#include "star.hpp"
#include <vector>
using namespace std;
class Sky
{
private:
    int width, height;
    vector<Star> stars;

public:
    Sky(int, int);
    void addStar(const Star &star);
    void displayStar() const;
};
#endif