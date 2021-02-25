#define STB_IMAGE_IMPLEMENTATION
#include "Bird.h"
#include "iGraphics.h"
extern Bird flappy;
void iG::iKeyboard(unsigned char key)
{
	switch(key)
	{
		case ' ':
			break;
	}
}
void iG::iKeyboardUp(unsigned char key)
{
	
}

void iG::iSpecialKeyboard(unsigned char key)
{
	switch (key)
		{
		case GLUT_KEY_UP:
			break;
		case GLUT_KEY_DOWN:
			break;
		case GLUT_KEY_LEFT:
			break;
		case GLUT_KEY_RIGHT:
			break;
		case GLUT_KEY_END:
			exit(0);
			break;
		}
}

void iG::iSpecialKeyboardUp(unsigned char key)
{
	switch (key)
		{
		case GLUT_KEY_UP:
			break;
		case GLUT_KEY_DOWN:
			break;
		case GLUT_KEY_LEFT:
			break;
		case GLUT_KEY_RIGHT:
			break;
		}
}