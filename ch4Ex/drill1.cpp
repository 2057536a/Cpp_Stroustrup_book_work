/*
Write a program that consists of a while-loop that (each time around the loop) 
reads in two ints and then prints them. Exit the program when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

int main()
{

	//Variables that will hold the int inputs
	int num1, num2;

	// While loop will go on for as
	// long as there is int inputs 
	// and will print the numbers
	while (cin >> num1>>num2){
		cout<<"First number: "<< num1 << " ,second number: "<<num2 <<"\n";
	}

}