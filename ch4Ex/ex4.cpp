/*
Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program
asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). Your program
should be able to identify the number after asking no more than seven questions. Hint: Use the < and <= operators and the
if-else construct.
*/


#include "std_lib_facilities.h"

int main()
{

	//The necessary variables
	int low = 0, high = 100;
	bool found = false;
	string response = ""; 


	//Ask user to think of a number between 1  and 100 included
	cout << "Think of a number between 1 and 100.\n";

	//For as long as the boolean is not true repeat the block of code below
	while (found == false){

		// The guess will be the middle point between high and low, i.e. initially 50
		double guess = (high+low)/2;

		// Ask user a first question to see if the number is correct, by capturing a response and using an if statement to determine what is going on
		cout << "Is the number you are thinking of less than "<< (int)round(guess) <<"? Enter 'y', 'n' or 'found'.\n";
		cin >> response;

		//If the secret number is less than my guess, then it must be between the initial low boundary and the guess
		if (response == "y"){
			high = guess;
		}
		//If it is higher than the guess, then make the guess the lower boundary and keep the initial higher boundary
		else if (response == "n"){
			low = guess;
		}
		//Otherwise, secret number is found, so notify user and change the boolean variable so that the program exits while loop
		else if (response == "found"){
			cout <<"The number you are thinking is "<< guess <<"!\n";
			found = true;
		}
	}

}


