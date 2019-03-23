#ifndef CRAPS_H
#define CRAPS_H
//class Craps interface

#include <vector>
#include <iostream>
#include "roll.h"
#include "shooter.h"

class Craps {
private:
	std::vector<Roll> rolls;
	std::vector<Shooter> shooters;

	friend std::ostream & operator << (std::ostream &os, const Craps &c);
	friend std::istream & operator >> (std::istream &is, Craps &c);
public:
	void play_game();
};

#endif