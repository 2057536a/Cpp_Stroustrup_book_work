/*
Now change the body of the loop so that it reads just one double each time around. Define two variables to keep track
of which is the smallest and which is the largest value you have seen so far. Each time through the loop write out the
value entered. If it’s the smallest so far, write the smallest so far after the number. If it is the largest so far, write the
largest so far after the number.
*/


#include "std_lib_facilities.h"

int main()
{

	//Declate variables to hold the values
	double num, min, max;

	//Ask for the first number and make it both max and min
	cin >> num;
	max = num;
	min =max;

	//First output about the initial number
	cout << "Number entered: "<< num << ". The largest so far.\n";

	//All subsequent numbers entered will be compared to the initial max and min
	while (cin >> num){
		//Output the value
		cout << "Number entered: "<< num;

		//Print results depending on whether the value entered is larger or smaller
		// than the previously recorded max and min
		if (num > max){
			max = num;
			cout << ". The largest so far.\n";
		}
		else if (num < min){
			min = num;
			cout<<". The smallest so far.\n";
		}
		else{
			cout<<"\n";
		}

	}
}





