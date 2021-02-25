#include "box.h"
class Bird:public Box{
private:
	bool pause,up;
public:
	Bird();
	void moveUp();
	void moveUp(int);
	void moveDown();
	void moveDown(int);
	void stop();
	void move();
	bool isStopped();
	void mouseControl(int,int);
	bool isDead();
	void draw();
	void save();
	void load();
	void fly();
	bool isFlying();
	void fall();
};