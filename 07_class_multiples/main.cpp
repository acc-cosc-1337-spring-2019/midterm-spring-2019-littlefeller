
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/

#include "shooter.h"
#include "roll.h"
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

	shooter s1;

	std::vector<Roll> rolls;

	for (int i = 0; i < 10; i++)
	{

		Roll r1 = s1.shoot(d1, d2);

		rolls.push_back(r1);

	}

	for (auto c : rolls)
	{
		string str1 = c.result();
		cout << str1 << "\n";

	}

	return 0;
}