#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
using namespace std;
class Polygon{
protected:
    double pA;
    double pB;
    double a;
public:
    virtual void area() = 0;
    void setPar(double a ,double b );
    virtual void read() =0;
    void display();
};
class Triangle : public Polygon{
     void read();
     void area();
     void dispaly();
};
class Rectangle:public Polygon{
     void read();
    void area();
    void dispaly();
};

#endif // POLYGON_H
