#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

//Create a test case that shows that a copy of Die are not the same
//objects in memory

TEST_CASE("Die Memory Test")
{
	Die d1;
	Die d2 = d1;

	d1.roll();

	REQUIRE(d1.rolled_value() != d2.rolled_value());
}
