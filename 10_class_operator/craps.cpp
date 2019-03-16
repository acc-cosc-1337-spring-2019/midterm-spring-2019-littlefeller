#include "craps.h"
#include "shooter.h"
#include<iostream>
using std::cout;
using std::cin;
#include<string>
using std::string;
//class Craps implementation

void Craps::play_game()
{


	int current_shooter = 1;
	string run_program = "y";
	
	

		for (auto s : shooters)
		{

			if (run_program != "y")
			{
				break;
			}

			Die d1;
			Die d2;

			string do_roll;

			cout << "\nShooter " << current_shooter << " Turn\n";

			string round_over = "no";

			while (round_over == "no")
			{

				cout << "Continue game? (y for yes): ";
				cin >> run_program;

				if (run_program != "y")
				{
					break;
				}

				cout << "Roll? (y for yes): ";
				cin >> do_roll;

				if (do_roll != "y")
				{
					break;
				}

				Roll r1 = s.shoot(d1, d2);
				cout << r1.result() << "\n";

				if (r1.result() == "Craps")
				{
					cout << "Lose. Round Over.\n";
					break;
				}
				else if (r1.result() == "Natural")
				{
					cout << "Win. Round Over.\n";
					break;
				}
				else
				{
					cout << "Round Over.\n";
					break;
				}
			}

			current_shooter++;

		}


}



std::ostream & operator<<(std::ostream & out, const Craps & t)
{

	std::string str1;

	for (auto c : t.rolls)
	{
		str1 = c.result();
		out << str1 << "\n";

	}

	return out;

}


std::istream & operator>>(std::istream & in, Craps & t)
{
	
	int value;

	std::cout << "Enter number of shooters: ";
	in >> value;

	for (int i = 0; i < value; i++)
	{
		shooter s1;
		t.shooters.push_back(s1);

	}

	return in;

}

