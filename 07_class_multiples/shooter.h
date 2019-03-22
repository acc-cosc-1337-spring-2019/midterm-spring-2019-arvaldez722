#ifndef SHOOTER_H
#define SHOOTER_H

//class Shooter interface
#include "roll.h"

class Shooter
{
public:
	Roll shoot(Die& d1, Die& d2);
};

#endif