#include"State.h"
#include"Friend.h"

Normal::Normal(Friend *f)
{
	pf = f;
}

void Normal::goWalk()
{
	cout << "Ok, lets go!\n";
}

void Normal::goUniversity()
{
	cout << "Ok, lets go!\n";
}

void Normal::playPC()
{
	cout << "Yeah, lets do it!\n";
}

void Normal::changeState(states st)
{
	switch (st)
	{
	case normal: cout << "I'm already in this state!\n";
		break;
	case busy: pf->setCurrent(new Busy(pf)); delete this;
		break;
	case ill: pf->setCurrent(new Ill(pf)); delete this;
		break;
	}
}

//------------------------------

Busy::Busy(Friend *f)
{
	pf = f;
}

void Busy::goWalk()
{
	cout << "No, I'm busy. Lets go late.\n";
}

void Busy::goUniversity()
{
	cout << "Ok, lets go!\n";
}

void Busy::playPC()
{
	cout << "Yeah, lets do it!\n";
}

void Busy::changeState(states st)
{
	switch (st)
	{
	case normal: pf->setCurrent(new Normal(pf)); delete this;
		break;
	case busy: cout << "I'm already in this state!\n";
		break;
	case ill: pf->setCurrent(new Ill(pf)); delete this;
		break;
	}
}

//------------------------------

Ill::Ill(Friend *f)
{
	pf = f;
}

void Ill::goWalk()
{
	cout << "Oh, no. Leave me alone!\n";
}

void Ill::goUniversity()
{
	cout << "Oh, unfortunately, I have to do it. Lets go.\n";
}

void Ill::playPC()
{
	cout << "Oh, I want to play, but I just can't. Sorry.\n";
}

void Ill::changeState(states st)
{
	switch (st)
	{
	case normal: pf->setCurrent(new Normal(pf)); delete this;
		break;
	case busy: pf->setCurrent(new Busy(pf)); delete this;
		break;
	case ill: cout << "I'm already in this state!\n";
		break;
	}
}