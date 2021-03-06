#ifndef SHAPE_H
#define SHAPE_H
#include <string>


struct ObjectPosition
{
    double x, y;
};

class Shape
{
    protected:
    double *xCoord;
    double *yCoord;
    int pointCount;

    public:
    virtual std::string getType() = 0;
    virtual double area();
    virtual double circumference();
    virtual bool isConvex();
    virtual ObjectPosition position() = 0;
    double distance(Shape* s);
    ~Shape();

};

#endif // !SHAPE_H