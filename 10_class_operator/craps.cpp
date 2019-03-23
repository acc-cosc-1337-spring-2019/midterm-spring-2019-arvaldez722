#include "craps.h"

//class Craps implementation

void Craps::play_game()
{
	Die d1;
	Die d2;

	int i = 0;
	int point = 0;
	bool newShooter = true;

	while (i < shooters.size()) {
		Shooter cur_shooter = shooters[i];

		if (newShooter) {
			std::cout << "NEW SHOOTER!" << std::endl;
		}
		newShooter = true;

		//make a Come Out 
		std::cout << "Shooter " << std::to_string(i+1) << " starts the round with a Come Out roll." << std::endl;
		Roll r = cur_shooter.shoot(d1, d2);

		rolls.push_back(r);

		if (r.result() == "Craps") {
			std::cout << "Shooter craps out - Pass Line bets lose" << std::endl;
		}
		else if (r.result() == "Natural") {
			std::cout << "Shooter rolls Natural - Pass Line bets WIN!!!" << std::endl;
		}
		else if (r.result() == "Points") {
			point = r.value_1() + r.value_2();
			std::cout << "Shooter's point: " << point << std::endl;

			int dSum = 0;
			do {
				Roll newRoll = cur_shooter.shoot(d1, d2);
				rolls.push_back(newRoll);
				dSum = newRoll.value_1() + newRoll.value_2();
				std::cout << "Shooter rolled a " << dSum << std::endl;
			} while (dSum != point || 7 == dSum);

			if (7 == dSum) {
				std::cout << "Shooter rolled a 7 - Seven-Out - Pass Line bets L O S E! Round end." << std::endl;
			}
			else {
				std::cout << "Shooter rolled a " << dSum << " - Pass Line bets Win! Same Shooter" << std::endl;
				newShooter = false;
			}
		}

		if (newShooter) {
			++i;
		}
		std::cout << std::endl;
	}
}


std::ostream & operator << (std::ostream &os, const Craps &c) {
	//it would be nice to use the Roll friend function here ... oh well

	for (int i = 0; i < c.rolls.size(); ++i) {
		Roll r = c.rolls[i];
		os << r.result() << ": " << r.value_1() << ", " << r.value_2() << std::endl;
	}

	return os;
}

std::istream & operator >> (std::istream &is, Craps &c) {
	int num_shooters;
	
	std::cout << "Enter number of shooters: ";
	is >> num_shooters;

	for (int i = 0; i < num_shooters; ++i) {
		Shooter newShooter;;
		c.shooters.push_back(newShooter);
	}

	return is;
}


