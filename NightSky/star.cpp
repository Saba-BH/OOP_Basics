#include "star.hpp"
#include <iostream>
using namespace std;
Star::Star(int x, int y, double brightness)
    : x(x), y(y), brightness(brightness) {}
int Star::getX() const
{
    return x;
}
int Star::getY() const
{
    return y;
}
double Star::getBrightness() const
{
    return brightness;
}
void Star::print() const
{
    cout << "Star at (" << x << " , " << y << ") with brightness " << brightness << endl;
}
