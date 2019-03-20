//prototypes and defs to calc the dna consensus for a vector of strings
#include <vector>
#include <string>

//void std::vector<std::string> dna_string();

//bool check_element();


//consensus is the most common symbol at each position
	//so cycle through each element of the vector and then each element of the string and determine common symbol
std::string get_consensus(std::vector<std::string> dnaStrings);
