#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for dna consensus header
#include "dna_consensus.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Consensus Blah")
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

	REQUIRE(get_consensus(dna_string) == "ATGCAACT");

}