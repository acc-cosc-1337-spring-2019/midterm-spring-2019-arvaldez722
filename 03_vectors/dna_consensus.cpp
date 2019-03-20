#include "dna_consensus.h"
#include <string>
#include <vector>

std::string get_consensus(std::vector<std::string> dnaStrings)
{
	std::string consensusString;

	//go through the vector and get the length of each string. Ideally they're all equal but we'll take the shortest length
	//std::vector<std::string>::iterator
	int strLength = 1000;
	//for (auto it = dnaStrings.begin(); it != dnaStrings.end(); ++it) {
	for(int i=0; i<dnaStrings.size(); i++) {
		if (dnaStrings[i].length() < strLength) {
			strLength = dnaStrings[i].length();
		}
	}

	//For each position in the string
	for (int pos = 0; pos < strLength; ++pos) {
		//Loop through the vector and tabulate the A, G, C, T's
		int A = 0;
		int G = 0;
		int C = 0;
		int T = 0;
		int junk = 0;
		for (int stringNum = 0; stringNum < dnaStrings.size(); stringNum++) {
			switch (dnaStrings[stringNum].at(pos)) {
			case 'a':
			case 'A': ++A;
				break;
			case 'g':
			case 'G': ++G;
				break;
			case 'c':
			case 'C': ++C;
				break;
			case 't':
			case 'T': ++T;
				break;
			default:
				++junk;

			}
		}
		//Check to see which character we had the most of
		
		char cons = 'X';

		//is A largest
		if (A > G && A > C && A > T) {
			cons = 'A';
		}
		//is G largest
		if (G > A && G > C && G > T) {
			cons = 'G';
		}
		//is C largest
		if (C > A && C > G && C > T) {
			cons = 'C';
		}
		//is T largest
		if (T > A && T > G && T > C) {
			cons = 'T';
		}
		
		//Add that character to the consensus string
		std::string t(1, cons);
		consensusString += t + " ";
	}
	//I want A=1|G=2|C=3|T=4 i want to check if the check_element of the element?!!?!?!?

	return consensusString;
}

