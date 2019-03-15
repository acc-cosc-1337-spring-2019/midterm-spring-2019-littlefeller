#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for die header
#include "die.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write a test case to assert that die rolls return a value from 1 to 6.
Use a loop to roll 10 times and assert that each time value is from 1 to 6.
*/
TEST_CASE("Test rolls") 
{
	
	Die die1;

	for (int i=0; i < 10; i++)
	{
		die1.roll();

		REQUIRE(die1.rolled_value() > 0);
		REQUIRE(die1.rolled_value() < 7);

	}

}