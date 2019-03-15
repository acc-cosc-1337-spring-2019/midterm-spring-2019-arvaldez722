#include <iostream>
#include "dna_hamming.h"
#include <string>

int main() 
{ 
	int choice;
	char c;
	std::string dna1;
	std::string dna2;

		do
		{ 
			std::cout << "Enter 1st DNA Sequence: ";
			std::cin >> dna1;

			std::cout << "Enter 2nd DNA Sequence: ";
			std::cin >> dna2;

			std::cout << "The Hamming Different between each DNA sequence is: "<< get_dna_hamming_distance(dna1, dna2)<<"\n";
				
			

			std::cout << "Do you want to continue? Enter: y";
			std::cin >> choice;

		} while (choice == 'y' || 'Y');
	
	return 0;
}