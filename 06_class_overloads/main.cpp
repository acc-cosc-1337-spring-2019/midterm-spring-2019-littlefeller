/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll OVERLOADED function,
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/

#include "roll_ol.h"
#include "die.h"
#include<vector>
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;

int main()
{

	Die d1;
	Die d2;

	std::vector<Roll> rolls;

	for (int i = 0; i < 20; i++)
	{

		Roll r1(d1, d2);

		r1.roll(d1, d2);

		int v1 = r1.value_1();
		int v2 = r1.value_2();

		rolls.push_back(r1);

		cout << "die 1: " << v1 << " " << "die 2: " << v2 << "\n";

	}

	for (auto c : rolls)
	{
		string str1 = c.result();
		cout << str1 << "\n";

	}

	return 0;
}