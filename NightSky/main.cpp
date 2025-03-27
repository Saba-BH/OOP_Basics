#include "sky.hpp"
#include <iostream>
using namespace std;
int main(){
    Sky nightSky(20, 10);

    nightSky.addStar(Star(10,3,66.7));
    nightSky.addStar(Star(2,1,90.6));
    nightSky.addStar(Star(13,8,39.3));
    nightSky.addStar(Star(1,9,100));

    cout << "Night Sky:" << endl;
    nightSky.displayStar();
    return 0;

}