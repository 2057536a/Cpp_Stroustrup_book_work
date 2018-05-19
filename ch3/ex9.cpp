/*
Write a program that converts spelled-out numbers such as “zero” and “two” into digits, 
such as 0 and 2. When the user inputs a number, the program should print out the corresponding 
digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the user enters 
something that doesn’t correspond, such as stupid computer!.
*/


#include "std_lib_facilities.h"

int main(){

	string zero = "zero";
	string one = "one";
	string two = "two";
	string three = "three";
	string four = "four";
	

	string testValue;

	cout<<"Enter an integer from 0 to 4 as a word and will convert it to a numeric\n";

	cin>>testValue;

	if(testValue == zero){
		cout<<"You have entered: "<<testValue<<" ,which, in numerics is "<< 0 <<".\n";
	}
	else if(testValue == one){
		cout<<"You have entered: "<<testValue<<" ,which, in numerics is "<< 1 <<".\n";
	}
	else if(testValue == two){
		cout<<"You have entered: "<<testValue<<" ,which, in numerics is "<< 2 <<".\n";
	}
	else if(testValue == three){
		cout<<"You have entered: "<<testValue<<" ,which, in numerics is "<< 3 <<".\n";
	}
	else if(testValue == four){
		cout<<"You have entered: "<<testValue<<" ,which, in numerics is "<< 4 <<".\n";
	}
	else{
		cout<<"Not a number I know!!!\n";
	}

	return 0;

}