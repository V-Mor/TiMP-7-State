#include"Friend.h"

int main()
{
	Friend fr(normal);
	fr.goWalk();
	fr.changeState(ill);
	fr.goWalk();
	fr.goUniversity();
	fr.changeState(ill);
	fr.changeState(busy);
	fr.playPC();
	fr.goWalk();
	return 0;
}