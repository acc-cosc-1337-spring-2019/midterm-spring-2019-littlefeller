#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for dna header

#include "dna_hamming.h"

TEST_CASE("Test configuration setup") 
{
	REQUIRE(true == true);
}

/*

*/


TEST_CASE("Test dna function")
{
	REQUIRE(get_dna_hamming_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == 7);
}