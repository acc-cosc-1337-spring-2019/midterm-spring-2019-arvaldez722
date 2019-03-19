#include <iostream>
#include "dna_hamming.h"
#include <string>

int main() 
{ 
	char choice;
	//char c;
	std::string dna1;
	std::string dna2;

	int distance = 0;
		do
		{ 
			std::cout << "Enter 1st DNA Sequence: ";
			std::cin >> dna1;

			std::cout << "Enter 2nd DNA Sequence: ";
			std::cin >> dna2;

			
			distance = get_dna_hamming_distance(dna1, dna2);
			
			if (distance >= 0) {
				std::cout << "The Hamming Different between each DNA sequence is: " << distance << "\n";
			}
			else {
				std::cout << "There was a problem with the string lengths!!!" << "\n";
			}
				
			std::cout << "Do you want to continue? y/n: ";
			std::cin >> choice;

		} while (choice == 'y' || choice == 'Y');
	
	return 0;
}