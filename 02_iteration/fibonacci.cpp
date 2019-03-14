#include "fibonacci.h"
#include<vector>
using std::vector;
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

vector<int> get_fibonacci(int value)
{
	
	vector<int> sequence;
	if (value == 0)
	{
		sequence.push_back(0);
		return sequence;
	}

	sequence.push_back(0);
	sequence.push_back(1);
	sequence.push_back(1);

	if (value == 1)
	{
		return sequence;
	}

	int t1 = 0, t2 = 1, nextTerm = 0;

	nextTerm = t1 + t2;

	while (nextTerm <= value)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		sequence.push_back(nextTerm);
	}

	sequence.pop_back();

	return sequence;

}

//0, 1, 1, 2, 3, 5, 8