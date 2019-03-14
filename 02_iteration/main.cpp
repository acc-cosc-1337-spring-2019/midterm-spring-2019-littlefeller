//write include statement
#include "fibonacci.h"
#include<string>
#include<iostream>
#include<vector>
/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	
	std::string again;
	int value;
	do
	{
		std::cout << "Enter number: " << "\n";
		std::cin >> value;
		std::vector<int> result = get_fibonacci(value);

		for (auto t : result)
		{
			std::cout << t << " ";
		}

		std::cout << "\nAgain? (y for yes): ";
		std::cin >> again;

	} while (again == "y");

	return 0;
}