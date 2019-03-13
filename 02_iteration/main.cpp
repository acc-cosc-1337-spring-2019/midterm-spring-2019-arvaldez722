//write include statement
#include "fibonacci.h"


/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	int choice;
	int stop_num;
	do
	{
		std::cout << "Enter the number of terms you want: " << "\n";
		std::cin >> stop_num;

		std::cout << "The Fibonacci Sequence up to " << stop_num << "term is: \n" << get_fibonacci;

		std::cout << "To continue, Enter: y";choice
		std::cin 
	} while (choice == 'y' || 'Y');
	
	return 0;
}