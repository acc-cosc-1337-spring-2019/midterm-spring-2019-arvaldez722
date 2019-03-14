#ifndef ROLL_H
#define ROLL_H
//Roll class interface 
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

	
private:
	Die& die1 : { };
	Die& die2 :{};
	int die1_roll_value();
	int die2_rolled_value();
	bool rolled = false;
	bool craps();
	bool natural();
};
#endif
