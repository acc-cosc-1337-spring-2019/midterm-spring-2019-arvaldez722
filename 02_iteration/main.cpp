//write include statement
#include "fibonacci.h"
#include <iostream>


/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	char choice;
	int stop_num;
	do
	{
		std::cout << "Enter the number of terms you want: " << "\n";
		std::cin >> stop_num;

		std::cout << "The Fibonacci Sequence up to " << stop_num << " term is: " << get_fibonacci(stop_num) << "\n";

		std::cout << "To continue, Enter y: ";
		std::cin >> choice;

	} while (choice == 'y' || choice == 'Y');
	
	return 0;
}