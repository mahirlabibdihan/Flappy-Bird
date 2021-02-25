#define STB_IMAGE_IMPLEMENTATION
#include "Bird.h"
#include "Pipe.h"
bool up;
extern Pipe pipe;
Bird::Bird()
{
	pause=true;
	y=500;
	x=500;
}
void Bird::moveUp()
{
	y++;
}
void Bird::moveUp(int dy)
{
	y+=dy;
}
void Bird::moveDown()
{
	y--;
}
void Bird::moveDown(int dy)
{
	y-=dy;
}
void Bird::stop()
{
	pause=true;
}
bool Bird::isStopped()
{
	return pause;
}
void Bird::move()
{
	pause=false;
}
void Bird::mouseControl(int button,int state)
{
	if(state==GLUT_DOWN)
	{
		if(button==GLUT_LEFT_BUTTON)
		{
			if(isStopped()) 
			{
				PlaySound("Data\\Music\\Background.wav",NULL,SND_LOOP|SND_ASYNC);
				move();
			}
			fly();
		}
		else if(button==GLUT_RIGHT_BUTTON)
		{
			if(isStopped()) move();
			else 
			{
				PlaySound(NULL,NULL,NULL);
				stop();
			}
		}
	}
}
bool Bird::isDead()
{
	if(y<0) return true;
	else if(x+width-110>pipe.getX()&&x+70<pipe.getX()+pipe.getWidth()) 
	{
		if(y+60<pipe.getHeight())
		{
			cout<<"DOWN"<<endl;
			cout<<y<<" "<<pipe.getHeight()<<endl;
			cout<<x<<" "<<pipe.getX()<<endl;
			return true;
		}
		else if(y-40>pipe.getHeight()+100)
		{
			cout<<"UP"<<endl;
			cout<<y<<" "<<pipe.getHeight()<<endl;
			cout<<x<<" "<<pipe.getX()<<endl;
			return true;
		}
	}
	else return false;
}
void Bird::draw()
{
	if(::up)
	iG::IShowImage::BMP(x,y,"Data\\Image\\flappyUp.png");
	else
	iG::IShowImage::BMP(x,y,"Data\\Image\\flappyDown.png");  
}
void Bird::fly()
{
	up=true;
}
void Bird::fall()
{
	up=false;
}
bool Bird::isFlying()
{
	return up;
}