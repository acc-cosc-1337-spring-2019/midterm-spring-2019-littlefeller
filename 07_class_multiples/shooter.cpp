#include "shooter.h"

//class Shooter implementation

Roll shooter::shoot(Die & d1, Die & d2)
{

	Roll r1(d1, d2);
	r1.roll();
	return r1;

}
