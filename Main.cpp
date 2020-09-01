//****************************************************************
/*
	Aiden Trimble
	C++ 2020
	Due: September 14th
	Lab 2 Exploring Output
	To get familiar output to the command prompt using C++.
*/
//****************************************************************
#include <iostream>
#include <string>

using namespace std;

void printFirstName();
void printLastName();

//Giving the identifiers firstName and lastName the star characters and the order I want them in to make the checkerboard pattern
const string firstName = "    *       *       *       *";
const string lastName = "*	*	*	*";

int main()
{
	//I put tabs in between the days and times to get a clean column look in the end product
	std::cout << "Monday		11:00 - 12:30	Calculus 2\nMonday		1:30  - 2:30	C++\nTuesday		9:00  - 10:30	Engineering Problems\nTuesday		1:00  - 3:00	C++\nWednesday	11:00 - 12:30	Calculus 2\nWednesday	2:00  - 3:30	Classical Physics\nThursday	2:00  - 3:30	Classical Physics\nFriday		8:00  - 9:30	College Experience\n\n";

	//Outputting the identifiers and "endl" after them to return down a line over and over to get the checkerboard pattern
	std::cout << firstName << endl << lastName << endl << firstName << endl << lastName << endl << firstName << endl << lastName << endl << firstName << endl << lastName << endl;

	return 0;
}