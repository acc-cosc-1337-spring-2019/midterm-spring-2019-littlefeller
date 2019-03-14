#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for dna consensus header
#include "dna_consensus.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test it")
{

	std::vector<std::string> vect{ "ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC", "TTGGAACT", "ATGCCATT", "ATGGCACT" };

	REQUIRE(get_profile(vect, 0) == "A");
	REQUIRE(get_profile(vect, 1) == "T");
	REQUIRE(get_profile(vect, 2) == "G");
	REQUIRE(get_profile(vect, 3) == "C");
	REQUIRE(get_profile(vect, 4) == "A");
	REQUIRE(get_profile(vect, 5) == "A");
	REQUIRE(get_profile(vect, 6) == "C");
	REQUIRE(get_profile(vect, 7) == "T");

}

// A T G C A A C T