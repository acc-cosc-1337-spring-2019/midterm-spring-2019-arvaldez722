#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//write include statement for roll header
#include "roll.h"

/*
Write a test case to assert that retrieving the result from a roll before
calling the foll function returns the string:

Must roll first!
*/

TEST_CASE("Retreving Result with no roll")
{
	Die d1;
	Die d2;
	Roll r(d1, d2);
	REQUIRE(r.result() == "Must roll first!");
}


/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/
TEST_CASE("Dice roll test") {
	//Create two Die instances.
	Die d1;
	Die d2;
	bool testResult = false;

	//Create a 20iteration loop 
	for (int i = 0; i > 20; ++i) {
		//and create a Roll instance, 
		Roll r(d1, d2);
		//call roll function, 
		r.roll();
		//validate rolled values, 
		testResult = (r.result() == "Craps" || r.result() == "Natural" || r.result() == "Points");
		REQUIRE(testResult);
	}
}
