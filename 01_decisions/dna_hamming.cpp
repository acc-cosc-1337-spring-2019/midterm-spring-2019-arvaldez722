#include "dna_hamming.h"
#include <string>
/*
Write code for value-return function get_dna_hamming_distance with two const string
reference parameters that returns an int.

Problem
Figure 2. The Hamming distance between these two strings is 7. Mismatched symbols are 
colored red. Given two strings s and t of equal length, the Hamming distance between
s and t, denoted dH(s,t), is the number ofcorresponding symbols that differ in s and t.

Sample for function call 
int distance = get_dna_hamming_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

distance will be 7

*/


int get_dna_hamming_distance(const std::string& dna1, const std::string& dna2)
{
	int distance = 0; //count is the distance
	//int i = 0;

	//Check the lengths
	int len_s1 = (int)dna1.length();
	int len_s2 = (int)dna2.length();

	if (len_s1 != len_s2) {
		return -1;
	}

	//Now that we know they're the same length, check them character by character.
	//while (dna1[i] != '\0')
	for( int i=0; i<len_s1; ++i ) {
		if (dna1[i] != dna2[i]) {
			++distance;
		}
		//++i;
	}

	return distance;
}
