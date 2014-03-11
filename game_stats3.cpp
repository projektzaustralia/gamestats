// Game Stats 3.0
// Demonstrates constants

#include <iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150; //declaring that a variable is constant is to say that it has a fixed value
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE}; //enum allows the variable to have a set of custom identifiers as possible values, creates a custom type that can then be used to declare variables against later on.
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost "
         << (CRUISER_COST - myShipCost) << " Resource Points.\n";

	return 0;
}
