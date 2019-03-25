#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "shooter.h"
#include <type_traits>	  // don't think this is needed - was for is_same
#include <typeinfo>       //for typeid
#include <cstdint> 

/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/
TEST_CASE("Shooter Test Case") {

	Die d1;
	Die d2;
	Shooter s1;
	bool testResult = false;
	
	auto t = s1.shoot(d1, d2);

	//test to make sure shooter returns a Roll
	REQUIRE( typeid(Roll) == typeid(t) );

	//verify that the roll result has one of the following values : Natural, Craps, Point
	testResult = ((t.result() == "Craps" || t.result() == "Natural" || t.result() == "Points"));
	REQUIRE(testResult);
}