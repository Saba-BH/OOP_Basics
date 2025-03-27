#include "sky.hpp"
#include <vector>
#include <iostream>
using namespace std;
Sky::Sky(int width , int height)
: width(width) , height(height) {}

void Sky::addStar(const Star& star){
    if (star.getX() >= 0 && star.getX() < width && star.getY() >=0 && star.getY() < height){
        stars.push_back(star);
    }
    else{
        cout <<"Star is out of bounds and will not be added." << endl;
    }

} 
void Sky::displayStar() const{
    for (int i =0 ; i < height ; i++){
        for (int j=0 ; j<width ; j++){
            bool check = false ;
            for(const auto& star : stars){
                if(star.getX() == j && star.getY() == i){
                    cout << "*" ;
                    check = true;
                    break;

                }
                
            }
            if(!check){
                cout <<" " ;
            }
        }
        cout << endl ;
    }
}
