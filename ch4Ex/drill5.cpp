/*
Change the program so that it writes out the numbers are almost equal 
after writing out which is the larger and the smaller if the two numbers 
differ by less than 1.0/100.
*/


#include "std_lib_facilities.h"

int main()
{

	//Variables that will hold the int inputs
	double num1, num2, max, min;
	double difference = 1.0/100;


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
			min = num1;
			max = min;
		}
		
		//Print which one is smaller and which one is larger
		cout <<"The smaller value is: "<<min<<" and the larger value is: "<<max<<"\n";

		//Check the difference. If it is less than 0.01 then notify the user 
		if (abs(num1-num2) < difference){
			cout <<"The numbers are almost equal\n";
		}
	}



}