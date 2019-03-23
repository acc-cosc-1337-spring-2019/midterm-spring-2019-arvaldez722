#include <iostream>
#include "craps.h"

/*
Program runs until user opts out.

Create a Craps instance
Use overloaded cin on instance capture number of users
call play_game()
Use overloaded cout on instance-outputs vector roll result

*/
int main() 
{
	//Create a Craps instance
	Craps myCrapsGame;

	//Use overloaded cin on instance capture number of users
	std::cin >> myCrapsGame;

	//call play_game()
	myCrapsGame.play_game();

	//Use overloaded cout on instance - outputs vector roll result
	std::cout <<" Summary" << std::endl << myCrapsGame;

	system("pause");
	return 0;
}