/*
Modify the program described in exercise 11 to take an input value max 
and then find all prime numbers from 1 to max.
*/

#include "std_lib_facilities.h"

int main()
{
	//This will be used to check how many divisors each number has.
	// A number will have at least 2 divisors. Itself and 1. If the number of
	// divisors is greater or equals to 3, then the number is not a prime number
	int num_of_divisors = 0;
	// Each number will store its range into a vector that will be emptied after each iteration
	vector<int> ranges;
	//The vector that contains primes
	vector<int> primes;
	//The user's input
	int upper_limit;

	//Take the user input for the lower limit
	cout << "Enter an int from 1 to 100\n";
	cin >> upper_limit;

	cout << "The list of prime numbers from 1 to "<<upper_limit<<" is:\n";

	//Loop over all numbers from 1 to the upper_limit specified by the user
	for (int i=1; i <= upper_limit; ++i){

		//make a vector whose elements are the numbers of the range of the number 
		for (int j =1; j <= i; ++j){
			ranges.push_back(j);
		}
		//Loop over the elements of the vector and check how many elements can divide the initial number i.e. "i"
		for (int x : ranges){
			if ( i % x == 0){
				num_of_divisors += 1;
			}			
		}
		//An element has 3 divisors its a prime. Put it in the vector
		if (num_of_divisors < 3){
			primes.push_back(i);
		}
		//I need the vectors cleared of elements so I can loop over again
		ranges.clear();
		num_of_divisors = 0;
	}
	//Print out the primes vector elements
	for (int x: primes){
		cout<<x<<"\n";
	}	
}