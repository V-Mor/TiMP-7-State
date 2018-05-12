#pragma once

enum states { normal = 0, busy, ill  };

class State
{
	Friend *pf;

public:
	virtual void goWalk() = 0;
	virtual void goUniversity() = 0;
	virtual void playPC() = 0;
};

class Normal : public State
{
public:
	void goWalk();
	void goUniversity();
	void playPC();
	Normal(Friend*);
};

class Busy : public State
{
public:
	void goWalk();
	void goUniversity();
	void playPC();
	Busy(Friend*);
};

class Ill : public State
{
public:
	void goWalk();
	void goUniversity();
	void playPC();
	Ill(Friend*);
};
