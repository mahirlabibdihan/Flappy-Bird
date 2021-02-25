#include "Grid.h"
#include "main.h"
#include "Color.h"
int Grid::getUnit()
{
	return unit;
}

void Grid::setUnit(int u)
{
	unit = u;
	row = ceil(1.0*iG::iGetWindowHeight() / unit);
	col = ceil(1.0*iG::iGetWindowWidth() / unit);
}
int Grid::getRow()
{
	return row;
}

void Grid::setRow()
{
	row = iG::iGetWindowHeight() / unit;
}
int Grid::getCol()
{
	return col;
}
void Grid::setCol()
{
	col = iG::iGetWindowWidth() / unit;
}
void Grid::draw()
{
	iG::ISetColor::iTrans(BLACK,.1);
	for (int i = 0; i <= getCol(); i++)
	{
		int x = getUnit() * i;
		iG::IDraw::iLine(x, 0, x, getRow() * getUnit());
	}
	for (int i = 0; i <= getRow(); i++)
	{
		int y = Grid::getUnit() * i;
		iG::IDraw::iLine(0, y, getCol() * getUnit(), y);
	}
}
int Grid::unit;
int Grid::row;
int Grid::col;