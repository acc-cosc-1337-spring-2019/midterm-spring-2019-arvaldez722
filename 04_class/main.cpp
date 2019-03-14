#include "die.h"
//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output

*/

int main() 
{
	int choice;
	do
	{
		std::cout << "You rolled a " << rolled_value();

		std::cout << "Roll Die?";
		std::cin << choice;

	} while (choice = 'y' || 'Y');

	return 0;
}