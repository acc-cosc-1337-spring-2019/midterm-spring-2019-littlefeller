#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for fibonacci header
#include "fibonacci.h"
#include<vector>

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write test case for get fibonacci function with values 10 and 100
*/
TEST_CASE("Test fibo")
{

	std::vector<int> first{0, 1, 1, 2, 3, 5, 8};

	REQUIRE(get_fibonacci(10) == first);

	std::vector<int> second{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	REQUIRE(get_fibonacci(100) == second);
}