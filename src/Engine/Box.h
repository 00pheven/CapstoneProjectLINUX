
#ifndef ENGINE_BOX_H_
#define ENGINE_BOX_H_
#include "Entity.h"

//the Box object is the replacement for the Square object in the proposal.
//It works exactly the same

class Box : public Entity{
private:
	int x, y; //the x and y positions of the box
	unsigned w, h; //the width and height of the box
	bool visible;

	static void defaultBehavior(Entity* e); //the default behavior of a box


public:
	void draw(); //draw the box
	void setPosition(int,int); //set the position of the box
	int getX(){ return this->x;}; //return the X position of the box
	int getY(){ return this->y;}; //return the Y position of the box

	void setSize(unsigned int, unsigned int); //set the size of the box
	unsigned int getW(){ return this->w; }; //return the width of the box
	unsigned int getH(){ return this->h; }; //return the height of the box
	void hide(){ this->visible = false; }; //hides the box
	void show(){ this->visible = true; }; //shows the box

	void execute(); //execute the box's stored behavior

	Box();
	virtual ~Box();
};

#endif /* ENGINE_BOX_H_ */
