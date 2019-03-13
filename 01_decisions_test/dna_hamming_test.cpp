#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"dna_hamming.h"
//write include statement for dna header

TEST_CASE("Test configuration setup") 
{
	REQUIRE(true == true);
}


TEST_CASE("Dna Hamming Test")
{
	REQUIRE(get_dna_hamming_distance("AGCTATAG", "AGCTATAG") == 0);
	REQUIRE(get_dna_hamming_distance("AGCTATAG", "AGCTTTAG") == 1);
	REQUIRE(get_dna_hamming_distance("AGCTATAG", "CAGTATAG") == 3);
	REQUIRE(get_dna_hamming_distance("AGCTATAG", "GAGCTACC") == 8);
}
/*

*/