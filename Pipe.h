#include "Box.h"
class Pipe:public Box{
	public:
		void draw();
		void newPipe();
		void move();
		bool isOut();
};