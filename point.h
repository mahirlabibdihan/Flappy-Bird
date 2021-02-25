#ifndef __POINT__
#define __POINT__
class Point {
protected:
	double x, y;
public:
	Point();
	Point(double x,double y);
	double getX();
	double getY();
	void setPoint(double x, double y);
	void setX(double x);
	void setY(double y);
	void changeX(double x);
	void changeY(double y);
};
#endif