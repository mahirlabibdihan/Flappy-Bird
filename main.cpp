#include "color.h"
#define STB_IMAGE_IMPLEMENTATION
#include "main.h"
#include "Pipe.h"
#include "Bird.h"
#include "Grid.h"
#include "Game_Details.h"


Bird flappy;
Pipe pipe;
GameDetails game;
extern bool up;
void Logic()
{

}

void video()
{
	if (!flappy.isStopped()) up = !up;
}

void fly()
{
	if (flappy.isDead())
	{
		PlaySound("Data\\Music\\Hit.wav", NULL, SND_SYNC);
		exit(0);
	}
	if (!flappy.isStopped())
		{
			if(flappy.isFlying())
			{
				flappy.moveUp(80);
				flappy.fall();
			}
			else
			{
				flappy.moveDown(5);
			}
		}

}

void pipeMove()
{
	if (pipe.isOut())
	{
		pipe.newPipe();
		game.incrementScore();
	}
	if (!flappy.isStopped())
	{
		pipe.move();
	}
}
void setup()
{
	Grid::setUnit(100);
	flappy.setWidth(350);
	flappy.setHeight(240);
	flappy.setPoint((iG::iGetWindowWidth() / 2) - (flappy.getWidth() / 2), (iG::iGetWindowHeight() / 2) - (flappy.getHeight() / 2));
	pipe.setWidth(flappy.getWidth() / 2);
	pipe.newPipe();
}
void iG::windowSetup()
{
	iG::iSetScreenHeight(GetSystemMetrics(SM_CYFULLSCREEN));
	iG::iSetScreenWidth(GetSystemMetrics(SM_CXFULLSCREEN));
	iG::iSetWindowX(0);
	iG::iSetWindowY(0);
	iG::iSetWindowHeight(iScreenHeight);
	iG::iSetWindowWidth(iScreenWidth);
	iG::iSetClearColor(YELLOW);
}
int main(int argc, char *argv[])
{
	iG::windowSetup();
	setup();
	srand(time(NULL));
	iG::windowSetup();
	glutInit(&argc, argv);
	iG::ITimer::iSet(0, fly);
	iG::ITimer::iSet(0, pipeMove);
	iG::ITimer::iSet(100, video);
	iG::iInitialize("snake");
	glutFullScreen();
	glutSetCursor(GLUT_CURSOR_NONE);
	glutMainLoop();
	return 0;
}

