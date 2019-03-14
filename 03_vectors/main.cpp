
#include "dna_consensus.h"
#include<vector>
#include<string>
#include<iostream>
using std::vector;


int main() 
{
	
	std::vector<std::string> vect{ "ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC", "TTGGAACT", "ATGCCATT", "ATGGCACT"};

	std::string consensus;

	for (int i=0; consensus.length() < 8; i++)
	{

		std::string item = get_profile(vect, i);

		consensus += item;

	}

	std::cout << consensus;

	return 0;
}