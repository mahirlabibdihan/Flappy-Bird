#include "Pipe.h"
#include "Bird.h"
extern Bird flappy;
void Pipe::draw()
{
	iG::ISetColor::iSolid(getColor());
	iG::IDraw::IFilled::iRectangle(x,0,width,height);
	iG::IDraw::IFilled::iRectangle(x,height+flappy.getHeight()+100,width,iG::iGetWindowHeight()-height-flappy.getHeight()-100);
}
void Pipe::newPipe()
{
	x=iG::iGetWindowWidth();
	height=100+(rand()%(iG::iGetWindowHeight()-flappy.getHeight()-300));
	setColor(BLACK);
}
void Pipe::move()
{
	x-=10;
}
bool Pipe::isOut()
{
	return x<width;
}