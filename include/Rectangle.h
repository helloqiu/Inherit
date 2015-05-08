#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle:public Shape
{
    public:
        Rectangle(int x , int y , int length , int width);
    protected:
    private:
        int x ;
        int y;
        int length;
        int width;
};

#endif // RECTANGLE_H
