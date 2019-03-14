//class RollFriend implementation
#include "roll.h"
#indclude "die.h"

//roll class implementation

Roll::Roll(Die & d1, Die & d2)
{
}

void Roll::roll()
{
	Die::rolled_value()
}

std::string result()
{
	if (craps == true)
	{
		result = "Craps"
	}
	else if (natural == true)
	{
		result = "Natrual"
	}
	else
	{
		result = "Points"
	}
}

std::string Roll::result()
{
	if (rolled_value;
}

int Roll::value_1()
{
	return die1_roll_value;
}

int Roll::value_2()
{
	return die2_rolled_value;
}

bool Roll::craps()
{
	if (die1_roll_value + die2_rolled_value = 2 || 3 || 12)
	{
		return true;
	}
	return false;
}

bool Roll::natural()
{
	if (die1_roll_value + die2_rolled_value = 7 || 11)
	{
		return true;
	}

	return false;
}
