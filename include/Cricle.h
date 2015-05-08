#ifndef CRICLE_H
#define CRICLE_H
#include "Shape.h"

class Cricle:public Shape
{
    public:
        Cricle(int x , int y , int radius);
        void draw();
    protected:
    private:
        int radius;
        int x;
        int y;
};

#endif // CRICLE_H
