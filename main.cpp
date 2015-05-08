#include <iostream>
#include "Rectangle.h"
#include "Cricle.h"
#include "Canvas.h"
using namespace std;

int main()
{
    Canvas canvas;
    Cricle c1(10 , 20 , 5);
    Cricle c2(20 , 30 , 100);
    Rectangle r1(10 , 20 , 5 , 3);

    canvas.append(c1);
    canvas.append(c2);
    canvas.append(r1);
    canvas.draw();
    return 0;
}
