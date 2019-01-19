#include "Point.h"
#include <iostream>
#include <string>


Point::Point(double *xCoord, double *yCoord, int pointCount)
{
    this -> xCoord = xCoord;
    this -> yCoord = yCoord;
    this -> pointCount = pointCount;
}

std::string Point::getType()
{
    std::string type = "Point";
    return type;
}

ObjectPosition Point::position()
{
    ObjectPosition position;
    position.x = xCoord[0];
    position.y = yCoord[0];

    return position;
}

