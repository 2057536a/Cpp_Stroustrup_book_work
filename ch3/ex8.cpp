/*
Write a program to test an integer value to determine if it is odd or even. As always, make sure your output 
is clear and complete. In other words, don’t just output yes or no. Your output should stand alone, like The 
value 4 is an even number. Hint: See the remainder (modulo) operator
*/


#include "std_lib_facilities.h"


int main(){

	//Decleration of the variable to hold the user's input
	int testValue;

	//Prompt user for an integer value
	cout<<"Enter an integer and will check if it is odd or even:\n";

	//Read the input and store it into the variable
	cin>>testValue;

	//If the division by 2 has no remainder, then the value is even
	if (testValue % 2 == 0){
		cout<<"Value entered: "<<testValue<<" . The value is even.\n";
	}
	//Otherwise, if I have a remainder, the value is odd
	else{
		cout<<"Value entered: "<<testValue<<" . The value is odd.\n";
	}

	return 0;

}