#include "roll_friend.h"
#include <iostream>
/*
Create an instance of roll and call the friend function to output roll values
*/
int main() 
{
	Die d1;
	Die d2;
	Roll r(d1, d2);

	r.roll();

	std::cout << "The Roll is: " << r << std::endl;

	return 0;
}