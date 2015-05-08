#include "Canvas.h"

Canvas::Canvas()
{
    //ctor
    num = 0;
}
 void Canvas::append(Shape &shape){
    v.push_back(&shape);
    num += 1;
 }
 void Canvas::draw(){
    for (int i = 0 ; i < num ; i ++){
        v.at(i) -> draw();
    }
 }
