#ifndef __COORDINATE__
#define __COORDINATE__
class Grid{
protected:
	static int unit, row, col;
public:
	static int getUnit();
	static void setUnit(int);
	static int getRow();
	static int getCol();
	static void setRow();
	static void setCol();
	static void draw();
	virtual void abstract()=0;
};
#endif