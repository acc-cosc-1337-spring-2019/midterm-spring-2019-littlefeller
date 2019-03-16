#include "craps.h"
#include<string>
#include<iostream>
using std::cin;
using std::cout;
using std::string;

/*
Program runs until user opts out.

Create a Craps instance
Use overloaded cin on instance capture number of users
call play_game()
Use overloaded cout on instance-outputs vector roll result

*/
int main() 
{
	
	string again;

	do
	{

		cout << "\nWelcome to Craps.\n";

		Craps crap1;

		cin >> crap1;

		crap1.play_game();

		cout << "\nGame Over.\n";

		cout << crap1;

		cout << "\nPlay again? (y for yes): ";
		cin >> again;


	} while (again == "y");

	cout << "\nThanks for playing.";

	return 0;
}