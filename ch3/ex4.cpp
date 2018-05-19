
/*
Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and
val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report
them to the user.
*/

#include "std_lib_facilities.h"

int main()
{

	//Declare the variables we are going to need.
	//I will need quotient and remainder instead of ratio
	// in case the two numbers cannnot be divided exactly
	int val1,val2,max,min,sum,difference,product;
	double ratio;

	//Prompt user to enter two integers
	cout<<"Enter two integers and I'll produce some cool stuff for ya\n";

	//Read the user's input and store them to variables
	cin>>val1>>val2;

	//Determine the max and min
	if(val1<val2){				// if val1 is less than val2 then 
		min = val1;				//val1 is the minimum
		max = val2;				//and val2 the maximum
	}
	else if(val1>val2){			// Else if it is the other way around
		min=val2;				//Val2 is the minimum
		max = val1;				// and val1 the maximum
	}
	else{						// otherwise, they are the same number value and
		min = val1;				// minimum is whatever of these two
		max = min;				// and the max is the minimum since they are the same
	}

	//Calculate the required outputs
	sum = val1 + val2;		
	difference = max - min;
	product = val1 * val2;
	ratio = double(max)/(double)min;


	//Print out the information
	cout<<"Ok here we go:\n";
	cout<<"Of the two integers, the smaller is "<<min<<" and the larger is "<<max <<"\n";
	cout<<"Their sum is: "<<sum<<"\n";
	cout<<"Their difference is: "<<difference<<"\n";
	cout<<"Their product is :"<<product<<"\n";
	cout<<"Their ratio is: "<<ratio<<"\n";

	return 0;
}