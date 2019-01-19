#include "Line.h"
#include <string>


Line::Line(double *xCoord, double *yCoord, int pointCount)
{
    this -> xCoord = new double[pointCount];
    this -> yCoord = new double[pointCount];
    
    for(int i = 0; i < pointCount; i++)
    {
        this -> xCoord[i] = xCoord[i];
        this -> yCoord[i] = yCoord[i];
    }
    this -> pointCount = pointCount;
}

std::string Line::getType()
{
    std::string type = "Line";
    return type;
}

ObjectPosition Line::position()
{
    double centerX = (xCoord[0] + xCoord[1]) / 2;
    double centerY = (yCoord[0] + yCoord[1]) / 2;

    ObjectPosition position;
    position.x = centerX;
    position.y = centerY;

    return position; 
}


