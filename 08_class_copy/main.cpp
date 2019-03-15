/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/

#include "die.h"

#include<iostream>

int main() 
{
	
	//d2 is a copy of d1, meaning that it is the same as d1, but is a different variable (different memory location)

	Die d1;

	Die d2 = d1;

	// test

	int num1 = 5;

	int num2 = num1;

	std::cout << num1 << "\n";
	std::cout << num2 << "\n";

	num2 += 3;

	std::cout << num1 << "\n";
	std::cout << num2 << "\n";

	std::cout << "\n\n";

	// d3_ref is a reference to the original d3 variable memory location, meaning that is you change d3_ref, you will change d3

	Die d3;

	Die& d3_ref = d3;

	// test
	
	num1 = 5;

	int& num1_ref = num1;

	std::cout << num1 << "\n";
	std::cout << num1_ref << "\n";

	num1_ref += 3;

	std::cout << num1 << "\n";
	std::cout << num1_ref << "\n";

	return 0;
}