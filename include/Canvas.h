#ifndef CANVAS_H
#define CANVAS_H
#include"Shape.h"
#include<vector>
#include<iostream>
using namespace std;
class Canvas
{
    public:
        Canvas();
        void append(Shape &shape);
        void draw();
    protected:
    private:
        int num;
        vector<Shape*> v;
};

#endif // CANVAS_H
