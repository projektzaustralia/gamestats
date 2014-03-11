// Game Stats 2.0
// Demonstrates arithmetic operations with variables

#include <iostream>
using namespace std;

int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;

	//altering the value of a variable
	score = score + 100; // one way to alter a variable using addition
	cout << "score: " << score << endl;

	//combined assignment operator, compund assignment provide a shorter syntax for arithmetics and bitwise operations
	score += 100; //this is still the same as the previous
	cout << "score: " << score << endl;

	//increment operators
	int lives = 3;
	++lives; // this increments the variable before any other conditions apply (prefix)
	cout << "lives: "   << lives << endl;

	lives = 3;
	lives++; // this increments after any other conditions (postfix)
	cout << "lives: "   << lives << endl;

	lives = 3;
	int bonus = ++lives * 10; // this increments lives then multiplies the value by 10
	cout << "lives, bonus = " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10; //this multiplies lives by 10 then increments the value
	cout << "lives, bonus = " << lives << ", " << bonus << endl;

	//integer wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score; //when a value reaches its maximum size it returns to its smallest value
	cout << "score: "   << score << endl;

	return 0;
}
