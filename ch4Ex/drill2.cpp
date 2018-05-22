/*
Change the program to write out 

'the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.''
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
		else{
			max = num1;
			min = max;
		}

		cout <<"The smaller value is: "<<min<<" and the larger value is: "<<max<<"\n";

	}

}