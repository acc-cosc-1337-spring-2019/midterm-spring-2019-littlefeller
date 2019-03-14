#include "die.h"

#include <cstdlib> 
#include <ctime> 
/*
Create a Die class function code to model a game die with 6 sides
and values 1,2,3,4,5, and 6.

public roll function returns a number from 1 to 6(search C++ random function)
*/

void Die::roll()
{

	srand((unsigned)time(0));
	int random_integer;
	random_integer = (rand() % 6) + 1;

	roll_value = random_integer;

}

int Die::rolled_value() const
{
	return roll_value;
}



