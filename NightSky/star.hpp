#ifndef STAR_HPP
#define STAR_HPP
#include <iostream>
class Star{
    private:
    int x,y ;
    double brightness;

    public:
    Star(int , int , double);
    int getX() const;
    int getY() const;
    double getBrightness() const;
    

};
#endif