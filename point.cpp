#define STB_IMAGE_IMPLEMENTATION
#include "Point.h"
Point::Point()
{
	this->x=this->y=0;
}
Point::Point(double x,double y)
{
	this->x=x;
	this->y=y;
}
double Point::getX()
{
	return x;
}
double Point::getY()
{
	return y;
}
void Point::setPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}
void Point::setX(double x)
{
	this->x = x;
}
void Point::setY(double y)
{
	this->y = y;
}
void Point::changeX(double x)
{
	this->x += x;
}
void Point::changeY(double y)
{
	this->y += y;
}