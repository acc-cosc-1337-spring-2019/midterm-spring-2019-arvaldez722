#include "die.h"
#include <cstdlib>
#include <ctime>
/*
Create a Die class function code to model a game die with 6 sides
and values 1,2,3,4,5, and 6.

public roll function returns a number from 1 to 6(search C++ random function)
*/

//Constructors
Die::Die() {
	sides = 6;
	roll_value = 0;
	srand((unsigned int)time(NULL)); //seed
}

Die::Die(int s) {
	sides = s;
	roll_value = 0;
	srand((unsigned int)time(NULL)); //seed
}

void Die::roll()
{
	roll_value = (rand() % sides + 1);
}

int Die::rolled_value() const
{
	return roll_value;
}
