/*
Augment the program so that it writes the line the numbers are equal (only) if they are equal.
*/

#include "std_lib_facilities.h"

int main()
{

	//Variables that will hold the int inputs
	int num1, num2, max, min;

	// While loop will go on for as long as there is int inputs 
	// The if statement will determine min and max, and then will print 
	// out the results
	while (cin >> num1>>num2){

		if (num1 < num2){
			max = num2;
			min = num1;
		}
		else if (num1 > num2){
			max = num1;
			min = num2;
		}
		cout <<"The smaller value is: "<<min<<" and the larger value is: "<<max<<"\n";

		if (num1 == num2){
			cout <<"The numbers are equal\n";
		}

	}

}