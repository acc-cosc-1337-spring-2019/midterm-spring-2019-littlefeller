#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "shooter.h"
#include "die.h"
#include "roll.h"
#include<string>

/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/

TEST_CASE("Test shooter roll results")
{

	Die d1;
	Die d2;

	shooter s1;

	for (int i = 0; i < 20; i++)
	{

		Roll r1 = s1.shoot(d1, d2);

		std::string res = r1.result();

		if (res == "Craps")
		{
			REQUIRE(res == "Craps");
		}
		else if (res == "Natural")
		{
			REQUIRE(res == "Natural");
		}
		else if (res == "Points")
		{
			REQUIRE(res == "Points");
		}
		else
		{
			REQUIRE(res == "Wrong");
		}
	}

}