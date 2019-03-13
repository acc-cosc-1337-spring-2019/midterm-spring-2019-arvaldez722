#include "fibonacci.h"
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

std::string get_fibonacci(int stop_num&)
{
	//fin seq = a(sub n+2) = a( sub n) + a(sub n+1) ; f1 = 0 & f2= 1---> i =1 --> a(sub n-2) = 
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
	
} 
