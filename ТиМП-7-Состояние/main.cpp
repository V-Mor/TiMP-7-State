#include"Friend.h"

int main()
{
	Friend fr(normal);
	fr.goWalk();
	fr.changeState(ill);
	fr.goWalk();
	return 0;
}