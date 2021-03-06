#include <iostream>
#include <vector>
#include <string>
#include "dna_consensus.h"

int main() 
{
	std::vector<std::string> dna_string;
	
	std::string s1 = "ATCCAGCT";
	dna_string.push_back(s1);

	std::string s2 = "GGGCAACT";
	dna_string.push_back(s2);

	std::string s3 = "ATGGATCT";
	dna_string.push_back(s3);

	std::string s4 = "AAGCAACC";
	dna_string.push_back(s4);

	std::string s5 = "TTGGAACT";
	dna_string.push_back(s5);

	//vector now looks like {s1, s2, s3, s4, s5}
	
	std::cout << "The consensus is " << get_consensus(dna_string) << "\n";
	char a;
	std::cin >> a;

	return 0;
}