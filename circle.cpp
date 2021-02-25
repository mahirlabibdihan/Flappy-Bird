#define STB_IMAGE_IMPLEMENTATION
#include "Circle.h"
int Circle::getRadius()
{
	return radius;
}
int Circle::setRadius(int radius)
{
	this->radius = radius;
}
void Circle::save(ofstream& out)
{
	out << this->radius << endl;
	out << this->x << " " << this->y << endl;
}
void Circle::load(ifstream& in)
{
	in >> radius;
	in >> x >> y;
}
void Circle::draw()
{
	iG::ISetColor::iSolid(getColor());
	iG::IDraw::IFilled::iCircle(x,y,radius);
}