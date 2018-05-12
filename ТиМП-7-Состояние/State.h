#pragma once

#include<iostream>

using namespace std;

enum states { normal = 0, busy, ill  };

class State
{
protected:
	Friend *pf;

public:
	virtual void goWalk() = 0;
	virtual void goUniversity() = 0;
	virtual void playPC() = 0;
	virtual void changeState(states) = 0;
};

class Normal : public State
{
public:
	void goWalk();
	void goUniversity();
	void playPC();
	void changeState(states);
	Normal(Friend*);
};

class Busy : public State
{
public:
	void goWalk();
	void goUniversity();
	void playPC();
	void changeState(states);
	Busy(Friend*);
};

class Ill : public State
{
public:
	void goWalk();
	void goUniversity();
	void playPC();
	void changeState(states);
	Ill(Friend*);
};
