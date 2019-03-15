#include "dna_consensus.h"
#include<string>
#include<vector>

 std::string get_profile(std::vector<std::string> dna, int turn)
{

	int A = 0;
	int G = 0;
	int T = 0;
	int C = 0;

	// loop through first element of each string, then next, etc

	for (auto c : dna)
	{

		if (c[turn] == 'A')
		{
			A++;
		}
		if (c[turn] == 'G')
		{
			G++;
		}
		if (c[turn] == 'T')
		{
			T++;
		}
		if (c[turn] == 'C')
		{
			C++;
		}

	}

	if (G > C && G > T && G > A)
	{
		return "G";
	}
	if (C > G && C > T && C > A)
	{
		return "C";
	}
	if (T > C && T > G && T > A)
	{
		return "T";
	}
	if (A > C && A > T && A > G)
	{
		return "A";
	}

	return 0;
}

 std::string get_consensus(std::string con, std::vector<std::string> vec)
 {
	 for (int i = 0; con.length() < 8; i++)
	 {

		 std::string item = get_profile(vec, i);

		 con += item;

	 }
	 return con;
 }
