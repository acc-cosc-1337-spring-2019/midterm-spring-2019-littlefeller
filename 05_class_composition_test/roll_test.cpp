#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//write include statement for roll header
#include "roll.h"
#include<string>

/*
Write a test case to assert that retrieving the result from a roll before
calling the foll function returns the string:

Must roll first!
*/


 




/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/



TEST_CASE("Test valid roll results")
{

	Die d1;
	Die d2;
	Roll r1(d1, d2);

	for (int i = 0; i < 20; i++)
	{
		r1.roll();
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
