#pragma once

#include "State.h"

class Friend
{
	State *current;

public:
	void goWalk();
	void goUniversity();
	void playPC();
	Friend(states);
};
