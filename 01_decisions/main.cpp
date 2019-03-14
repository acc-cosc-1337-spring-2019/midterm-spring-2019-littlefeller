
#include "dna_hamming.h"
#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::cin;

int main() 
{
	
	string again;
	string str1;
	string str2;
	int result;
	do
	{

		cout << "Enter string 1: " << "\n";
		cin >> str1;
		cout << "Enter string 2: " << "\n";
		cin >> str2;

		result = get_dna_hamming_distance(str1, str2);
		cout << "Hamming distance is: " << result << "\n";
		cout << "Continue? (Enter y for yes): ";
		cin >> again;

	} while (again == "y");

	return 0;
}