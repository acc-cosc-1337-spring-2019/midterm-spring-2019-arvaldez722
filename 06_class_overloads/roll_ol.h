#ifndef ROLL_O_H
#define ROLL_O_H

//class interface
#include <string>
#include "die.h"

class Roll
{
public:
	Roll();
	Roll(Die& d1, Die& d2);
	void roll();
	void roll(Die& d1, Die& d2);
	std::string result();
	int value_1();
	int value_2();


private:
	Die& die1;
	Die& die2;
	int die1_rolled_value;
	int die2_rolled_value;
	bool rolled;
	bool craps();
	bool natural();

};
#endif // !ROLL_O_H