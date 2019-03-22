#include <iostream>
#include <string>
#include <vector>

#include "roll.h"
/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/
int main() 
{
	//Create two Die instances.
	Die d1;
	Die d2;
	//Create a vector of Roll
	std::vector<Roll> roll;
	//Create a 20iteration loop 
	for (int i = 0; i < 20; ++i) {

		//and create a Roll instance, 
		Roll r(d1, d2);
		//call roll function, 
		r.roll();
		//output rolled values, 
		std::cout << "You rolled " << r.result() << ": " << std::to_string(r.value_1()) << ", " << std::to_string(r.value_2()) << std::endl;
		//and add to vector.
		roll.push_back(r);
	}

	return 0;
}