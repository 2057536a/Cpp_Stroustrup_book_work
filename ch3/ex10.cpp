/*
Write a program that takes an operation followed by two operands and outputs the result. For example:

		+ 100 3.14
		* 4 5

Read the operation into a string called operation and use an if-statement to figure out which operation 
the user wants, for example, if (operation=="+"). Read the operands into variables of type double. 
Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/


#include "std_lib_facilities.h"


int main(){

	string operation;
	double num1, num2;

	cout<<"Enter the type of operation you want to use (for example, enter '+','-','x' or '/')\n";
	cin>>operation;

	cout<<"Enter two numbers you want to apply the operation onto:\n";
	cin>>num1>>num2;

	if(operation == "+"){
		cout<<"The result is: "<<num1 + num2<<"\n";
	}
	else if(operation == "-"){
		cout<<"The result is: "<<num1 - num2<<"\n";
	}
	else if(operation == "x"){
		cout<<"The result is: "<<num1 * num2<<"\n";
	}
	else if(operation == "/"){
		cout<<"The result is: "<<num1 / num2<<"\n";
	}
	else{
		cout<<"I do not know that operation. Is it klingon?\n";
	}



}