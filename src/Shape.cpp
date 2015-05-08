#include "Shape.h"

Shape::Shape()
{
    //ctor
}
string Shape::getName(){
    return name;
}
void Shape::setName(string name){
    this -> name = name;
}
