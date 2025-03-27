#include "sky.hpp"
#include <iostream>
using namespace std;
int main()
{
    Sky nightSky(20, 10);
    Star star1(10, 5, 78.1);
    Star star2(10, 3, 66.7);
    Star star3(2, 1, 90.6);
    Star star4(13, 8, 39.3);
    Star star5(1, 9, 100);
    star1.print();
    star2.print();
    star3.print();
    star4.print();
    star5.print();
    nightSky.addStar(star1);
    nightSky.addStar(star2);
    nightSky.addStar(star3);
    nightSky.addStar(star4);
    nightSky.addStar(star5);

    cout << endl
         << "Night Sky:" << endl;
    nightSky.displayStar();
    return 0;
}