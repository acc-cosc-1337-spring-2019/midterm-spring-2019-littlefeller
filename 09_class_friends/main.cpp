/*
Create an instance of roll and call the friend function to output roll values
*/

#include "roll_friend.h"

int main() 
{
	
	Die d1;
	Die d2;

	Roll r1(d1, d2);
	r1.roll();

	output_both_values(r1);

	return 0;
}