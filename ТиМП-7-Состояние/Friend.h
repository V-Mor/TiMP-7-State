#pragma once
#include"State.h"

using namespace std;

class Friend
{
	class State *current;

public:
	void goWalk();
	void goUniversity();
	void playPC();
	void changeState(enum states);
	void setCurrent(State *);
	Friend(enum states);
};
