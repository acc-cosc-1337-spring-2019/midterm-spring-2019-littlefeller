//class Craps interface

#include<vector>
#include<iostream>
#include "roll.h"
#include "shooter.h"


class Craps
{
public:

	void play_game();

	friend std::ostream & operator << (std::ostream & out,
		const Craps &t);


	friend std::istream & operator >> (std::istream & in, Craps &t);

	
private:

	std::vector<Roll> rolls;
	std::vector<shooter> shooters;

};