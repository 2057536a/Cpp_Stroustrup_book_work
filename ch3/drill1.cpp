/*
This drill is to write a program that produces a simple form letter based 
on user input. Begin by prompting a user to enter his or her first name and writing “Hello, first_name” where first_name is the name
entered by the user. Then modify your code as follows: change the prompt to “Enter the name of the person you want to
write to” and change the output to “Dear first_name,”. Don’t forget the comma.
*/


#include "std_lib_facilities.h"

int main()
{
	cout<<"Enter the name of the person you want to write to:\n";

	string first;

	cin>>first;

	cout<<"Dear "<<first<<",\n";
}