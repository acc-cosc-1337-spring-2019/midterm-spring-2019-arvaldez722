#include <iostream>
#include <string>
#include <vector>

#include "roll_ol.h"
/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll OVERLOADED function,
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

	//and create a Roll instance, 
	Roll r;

	//Create a 20iteration loop 
	for (int i = 0; i < 20; ++i) {
		//call roll function, 
		r.roll(d1, d2);
		//output rolled values, 
		std::cout << "You rolled " << r.result() << ": " << std::to_string(r.value_1()) << ", " << std::to_string(r.value_2()) << std::endl;
		//and add to vector.
		roll.push_back(r);
	}

	system("pause");
	return 0;
}