#include "Friend.h"
#include "State.h"

void Friend::goWalk()
{
	current->goWalk();
}

void Friend::goUniversity()
{
	current->goUniversity();
}

void Friend::playPC()
{
	current->playPC();
}

void Friend::changeState(states st)
{
	current->changeState(st);
}

void Friend::setCurrent(State *st)
{
	current = st;
}

Friend::Friend(states st)
{
	switch (st)
	{
	case normal: current = new Normal(this);
		break;
	case busy: current = new Busy(this);
		break;
	case ill: current = new Ill(this);
		break;
	}
}