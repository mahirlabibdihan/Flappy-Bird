#define STB_IMAGE_IMPLEMENTATION
#include "main.h"
#include "color.h"
#include "Bird.h"
#include "Pipe.h"
#include "Grid.h"
#include "game_details.h"
#include "score_font.h"
extern GameDetails game;
extern Pipe pipe;
extern Bird flappy;
void iG::iDraw()
{
	iClear();
	// iG::ISetColor::iSolid(RED);
	// iG::IDraw::iLine(0,pipe.getHeight()+100+40,iG::iGetWindowWidth(),pipe.getHeight()+100+40,10);
	// iG::IDraw::iLine(0,pipe.getHeight()-60,iG::iGetWindowWidth(),pipe.getHeight()-60,10);
	// iG::IDraw::iLine(pipe.getX()+110-flappy.getWidth(),0,pipe.getX()+110-flappy.getWidth(),iG::iGetWindowHeight(),10);
	// iG::IDraw::iLine(pipe.getX()+pipe.getWidth()-70,0,pipe.getX()+pipe.getWidth()-70,iG::iGetWindowHeight(),10);
	// Grid::draw();
	flappy.draw();
	pipe.draw();
	iG::ISetColor::iSolid(BLACK);
	iG::IDraw::IFilled::iRectangle(0, 0, flappy.getWidth(), iG::iGetWindowHeight());
	iG::IDraw::IFilled::iRectangle(0, 0, iG::iGetWindowWidth(), 50);
	iG::IDraw::IFilled::iRectangle(0,iG::iGetWindowHeight()-50 , iG::iGetWindowWidth(), 50);
	iG::IDraw::IFilled::iRectangle(iG::iGetWindowWidth()-50, 0,50, iG::iGetWindowHeight());
	char Temp[10];
	itoa(game.getScore(), Temp, 10);
	iG::ISetColor::iSolid(YELLOW);
	iDrawSmallScore(game.getScore(),10,flappy.getWidth()-100, iG::iGetWindowHeight()-200);
}
