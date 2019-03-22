#include <iostream>
#include <string>
#include <vector>

#include "shooter.h"

/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main()
{
	char choice;

	do {
		//Create two Die instances
		Die d1;
		Die d2;
		//Create a Shooter instance
		Shooter s1;
		//Create a vector of Roll
		std::vector<Roll> roll;
		//Create a 20iteration loop 
		for (int i = 0; i < 10; ++i) {
			Roll r = s1.shoot(d1, d2);
			//output rolled values, 
			std::cout << "You rolled " << r.result() << ": " << std::to_string(r.value_1()) << ", " << std::to_string(r.value_2()) << std::endl;
			//and add to vector.
			roll.push_back(r);
		}

		std::cout << "Do you want to roll again (y/n)? " << std::endl;
		std::cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	return 0;
}