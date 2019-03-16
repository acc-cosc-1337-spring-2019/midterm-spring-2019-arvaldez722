//class RollFriend interface
#ifndef ROLL_H
#define ROLL_H
//Roll class interface 
#include<iostream>
#include<string>
#include "die.h"
class Roll
{
public:
	Roll(Die& d1, Die& d2);
	void roll();
	std::string result();
	int value_1();
	int value_2();

	friend std::ostream & operator << (std::ostream & out, die1_rolled_value &d1, die2_rolled_value &d2)


private:
	Die& die1 : { };
	Die& die2 :{};
	int die1_roll_value;
	int die2_roll_value;
	bool rolled;
	bool craps();
	bool natural()
};
#endif
