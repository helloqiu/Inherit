#ifndef SHAPE_H
#define SHAPE_H
#include<string>
using namespace std;

class Shape
{
    public:
        Shape();
        string getName();
        void setName(string name);
    protected:
    private:
        string name;
};

#endif // SHAPE_H
