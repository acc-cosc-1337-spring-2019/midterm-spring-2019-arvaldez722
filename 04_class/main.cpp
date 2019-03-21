#include "die.h"

#include <iostream>
#include <string>
//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output
*/

int main() 
{
	Die d1;

	char choice;
	do
	{
		d1.roll();
		std::cout << "You rolled a " << std::to_string(d1.rolled_value()) << std::endl;

		std::cout << "Roll die again (y/n)? ";
		std::cin >> choice;

	} while (choice == 'y' || choice =='Y');

	return 0;
}