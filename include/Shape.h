#ifndef SHAPE_H
#define SHAPE_H
#include<string>
#include<iostream>
using namespace std;

class Shape
{
    public:
        Shape();
        string getName();
        void setName(string name);
        virtual void draw(){};
    protected:
    private:
        string name;
};

#endif // SHAPE_H
