// Game Stats
// Demonstrates declaring and initializing variables

#include <iostream>
using namespace std;

int main()
{
//every variable must be declared with its type before it can be used
	int score;				            //int, 32bit, 4bytes, integers can hold whole numbers but no fractions, they can be positive or negative
	double distance;		            //double, 64bit,double precision is a computer number format that represents a wide dynamic range of values
	char playAgain;			            //char, 8bit, 1byte, character may hold only one digit,letter or other symbol etc. they can be joined into strings
	bool shieldsUp;			            //bool, true or false, boolean is a logical type and only requires 1byte but typically counts as 1 or more

	short lives, aliensKilled;          //short, 16bit, 2bytes

// assigning values to each variable
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

//outputs strings with carriage returns/line feeds with the variable values at the end joining them into the string.
	cout << "\nscore: "		<< score << endl;
	cout << "distance: "	<< distance << endl;
	cout << "playAgain: "	<< playAgain << endl;
	//skipping shieldsUp since you don't generally print Boolean values
	cout << "lives: "		<< lives << endl;
	cout << "aliensKilled: "<< aliensKilled << endl;
	cout << "engineTemp: "	<< engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort; //typedef allows us to create a synonym for an existing type so we dont have to type the whole thing
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

	return 0;
}
