//class RollFriend interface
#ifndef ROLL_FRIEND_H
#define ROLL_FRIEND_H
//Roll class interface 
#include <iostream>
#include <string>
#include "die.h"

class Roll
{
public:
	Roll(Die& d1, Die& d2);
	void roll();
	std::string result();
	int value_1();
	int value_2();

	friend std::ostream& operator << (std::ostream& os, const Roll& r);

private:
	Die& die1;
	Die& die2;
	int die1_rolled_value;
	int die2_rolled_value;
	bool rolled;
	bool craps();
	bool natural();
};

#endif