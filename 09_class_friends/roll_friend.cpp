//class RollFriend implementation

#include "roll_friend.h"

#include<iostream>

void Roll::roll()
{
	die1.roll();
	die1_roll_value = die1.rolled_value();

	die2.roll();
	die2_roll_value = die2.rolled_value();

}

string Roll::result()
{
	if (craps())
	{
		return "Craps";
	}
	else if (natural())
	{
		return "Natural";
	}
	else
	{
		return "Points";
	}

}

int Roll::value_1()
{
	return die1_roll_value;
}

int Roll::value_2()
{
	return die2_roll_value;
}

void output_both_values(Roll& r1)
{
	std::cout << r1.die1_roll_value << "\n" << r1.die2_roll_value;
}

// **********************


bool Roll::craps()
{

	int sum = die1_roll_value + die2_roll_value;

	if (sum == 2 || sum == 3 || sum == 12)
	{
		return true;
	}
	return false;
}

bool Roll::natural()
{
	int sum = die1_roll_value + die2_roll_value;

	if (sum == 7 || sum == 11)
	{
		return true;
	}
	return false;
}

