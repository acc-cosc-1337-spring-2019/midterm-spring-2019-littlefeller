//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output

*/

#include "die.h"
#include<string>
#include<iostream>
using std::cout;
using std::cin;
using std::string;

int main() 
{
	
	Die die1;

	string again;

	do
	{

		cout << "Rolling...\n";

		die1.roll();
		int num = die1.rolled_value();

		cout << "Roll: " << num << "\n";
		cout << "Roll again? (y for yes): ";
		cin >> again;

	} while (again == "y");
	
	return 0;
}