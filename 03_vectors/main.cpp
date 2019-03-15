
#include "dna_consensus.h"
#include<vector>
#include<string>
#include<iostream>
using std::vector;


int main() 
{
	
	std::vector<std::string> vect{ "ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC", "TTGGAACT", "ATGCCATT", "ATGGCACT"};

	std::string consensus;
	
	std::string cons1 = get_consensus(consensus, vect);

	std::cout << cons1;

	return 0;
}