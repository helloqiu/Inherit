#include "Cricle.h"

Cricle::Cricle(int x , int y , int radius)
{
    //ctor
    this -> setName("Circle");
    this -> x = x;
    this -> y = y;
    this -> radius = radius;
}
void Cricle::draw(){
    cout << this -> getName() << endl;
    cout << "position : (" << x << "," << y << ") radius : " << radius << endl;
}
