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

TEST_CASE("Test overloaded functions")
{

	Die d1;
	Die d2;
	Roll r1(d1, d2);

	for (int i = 0; i < 20; i++)
	{
		r1.roll(d1, d2);
		std::string str = r1.result();
		if (str == "Craps")
		{
			REQUIRE(str == "Craps");
		}
		else if (str == "Points")
		{
			REQUIRE(str == "Points");
		}
		else if (str == "Natural")
		{
			REQUIRE(str == "Natural");
		}
		else
		{
			REQUIRE(false == true);
		}

	}

}