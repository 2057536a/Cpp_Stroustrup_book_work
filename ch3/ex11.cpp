/*
Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), 
dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar 
coins (100-cent coins). Query the user separately for the number of each size coin, 
e.g., “How many pennies do you have?” Then your program should print out something like this:

		You have 23 pennies.
		You have 17 nickels.
		You have 14 dimes.
		You have 7 quarters.
		You have 3 half dollars.
		The value of all of your coins is 573 cents.

Make some improvements: if only one of a coin is reported, make the output grammatically correct, 
e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents, i.e., $5.73 instead 
of 573 cents.
*/


#include "std_lib_facilities.h"


int main(){

	int pennies, nickels, dimes, quarters, halves, whole, totalCents;

	cout << "How many pennies do you have?\n";
	cin >> pennies;

	cout << "How many nickels do you have?\n";
	cin >> nickels;

	cout << "How many dimes do you have?\n";
	cin >> dimes;

	cout << "How many quarters do you have?\n";
	cin >> quarters;

	cout << "How many half- dollars do you have?\n";
	cin >> halves;

	cout << "How many single dollars do you have?\n";
	cin >> whole;


	totalCents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halves * 50) + (whole * 100);

	cout << "You have " << pennies <<" pennies.\n";
	cout << "You have " << nickels <<" nickels.\n";
	cout << "You have " << dimes <<" dimes.\n";
	cout << "You have " << quarters <<" quarters.\n";
	cout << "You have " << halves <<" half- dollars.\n";
	cout << "You have " << whole <<" one- dollar coins.\n";
	cout << "The value of all of your coins is " << totalCents <<" cents, or $"<<totalCents/100<<"."<<totalCents%100<<"\n";

}