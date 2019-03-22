#include "shooter.h"

//class Shooter implementation

Roll Shooter::shoot(Die & d1, Die & d2)
{
	//Create instance
	Roll r(d1, d2);
	//call roll function, 
	r.roll();

	return r;
}
