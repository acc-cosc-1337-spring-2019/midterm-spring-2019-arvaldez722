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
	int die_roll_value;
	bool rolled;
	bool craps();
	bool natural()
};