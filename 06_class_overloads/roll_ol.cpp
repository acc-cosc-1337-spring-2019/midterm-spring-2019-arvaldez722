#include "roll_ol.h"
#include "die.h"

//roll class implementation

//Type casting address 0 to a Die variable to make the compiler happy - probably not the best thing to do ...
Roll::Roll() : die1((Die)0), die2((Die)0) {
	die1_rolled_value = 0;
	die2_rolled_value = 0;

	rolled = false;
}


Roll::Roll(Die& d1, Die& d2) : die1(d1), die2(d2) {
	die1_rolled_value = 0;
	die2_rolled_value = 0;
	rolled = false;
}

void Roll::roll(Die& d1, Die& d2)
{
	d1.roll();
	die1_rolled_value = d1.rolled_value();

	d2.roll();
	die2_rolled_value = d2.rolled_value();

	rolled = true;
}

void Roll::roll()
{
	die1.roll();
	die1_rolled_value = die1.rolled_value();

	die2.roll();
	die2_rolled_value = die2.rolled_value();

	rolled = true;
}

std::string Roll::result()
{
	if (!rolled) {
		return "Must roll first!";
	}
	else if (craps())
	{
		return "Craps";
	}
	else if (natural())
	{
		return "Natural";
	}
	else
	{
		return "Points";
	}
}

int Roll::value_1()
{
	return die1_rolled_value;
}

int Roll::value_2()
{
	return die2_rolled_value;
}

bool Roll::craps()
{
	if ((die1_rolled_value + die2_rolled_value == 2) || (die1_rolled_value + die2_rolled_value == 3) || (die1_rolled_value + die2_rolled_value == 12))
	{
		return true;
	}
	return false;
}

bool Roll::natural()
{
	if ((die1_rolled_value + die2_rolled_value == 7) || (die1_rolled_value + die2_rolled_value == 11))
	{
		return true;
	}

	return false;
}
