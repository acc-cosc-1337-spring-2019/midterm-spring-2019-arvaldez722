#ifndef CRAPS_H
#define CRAPS_H
//class Craps interface

#include <vector>
#include <iostream>

class Craps
{
public:
	void play_game();
	//overload<<operator --> vector of rolls

	//overload >> operator --> user input number of shooters & number of vectors of shooters z
	friend std::ostream & operator << (std::ostream & out, );
	friend std::istream & operator >> (std::istream &in, );
private:
	std::vector<Roll> rolls;
	std::vector<Shooter> shooters;
#endif
	