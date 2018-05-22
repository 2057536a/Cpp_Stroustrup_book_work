/*
Keep all the values entered in a vector. At the end, write out those values.
*/


#include "std_lib_facilities.h"

int main()
{

	//Declate variables to hold the values
	double num, min, max;
	//The vector that will be storing the doubles entered
	vector<double> numbers;

	//Ask for the first number and make it both max and min
	cin >> num;
	max = num;
	min =max;

	//First output about the initial number
	cout << "Number entered: "<< num << ". The largest so far.\n";

	//First input in the vector added
	numbers.push_back(num);

	//All subsequent numbers entered will be compared to the initial max and min
	while (cin >> num){

		//Put each input in the vector
		numbers.push_back(num);

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


	//Print out the numbers in the vector after they are being sorted

	sort(numbers);
	
	for (double d:numbers){
		cout << d <<'\n';
	}


}