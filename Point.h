#ifndef POINT_H
#define POINT_H
#include "Shape.h"

class Point : public Shape
{
    public:
    Point(double *xCoord, double *yCoord, int pointCount);
    std::string getType();
    ObjectPosition position();
    
};

#endif // !POINT_H