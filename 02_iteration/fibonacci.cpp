#include "fibonacci.h"
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

std::string get_fibonacci(int stop_num)
{
	std::string retString = "0 1 ";

	unsigned long f1 = 0UL;
	unsigned long f2 = 1UL;
	unsigned long nextNumber = 0UL;

	if (0 == stop_num) {
		retString = "0 ";
	} else {
		if (1 == stop_num) {
			retString = "0 1 ";
		}
		else {
			for (int i = 0; i < stop_num - 2; ++i) {
				nextNumber = f1 + f2;
				retString += std::to_string(nextNumber) + " ";
				f1 = f2;
				f2 = nextNumber;
			}
		}
	}

	return retString;

	//fin seq = a(sub n+2) = a( sub n) + a(sub n+1) ; f1 = 0 & f2= 1---> i =1 --> a(sub n-2) = 
	/*
	int f1 = 0;
	int f2 = 1;
	int next = 0;

	for (int i = 1; i <= stop_num; ++i)
	{
		if (i == 1)
		{
			std::cout << " " << f1;

		}
		if (i == 2)
		{
			std::cout << f2 << " ";
		}
		
		next = f1 + f2;
		f1 = f2; //f2 becomes the new f1
		f2 = next;

		std::cout << next << " ";

	}
	*/
	
} 
