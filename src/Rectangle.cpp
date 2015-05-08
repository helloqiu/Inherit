#include "Rectangle.h"

Rectangle::Rectangle(int x , int y , int length , int width)
{
    //ctor
    this -> setName("Rectangle");
    this -> x = x;
    this -> y = y;
    this -> length = length;
    this -> width = width;
}
void Rectangle::draw(){
    cout << this -> getName() << endl;
    cout << "position : (" << x << "," << y << ") length : " << length << " width : " << width;
}
