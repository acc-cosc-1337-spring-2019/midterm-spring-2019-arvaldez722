#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll_ol.h"

/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/

TEST_CASE("Overload Roll Test") {

	Die d1;
	Die d2;
	bool testResult = false;
	for (int i = 0; i < 20; ++i) {
		Roll r;
		r.roll(d1, d2);
		testResult = (r.result() == "Craps" || r.result() == "Natural" || r.result() == "Points");
		REQUIRE(testResult);
	}


}