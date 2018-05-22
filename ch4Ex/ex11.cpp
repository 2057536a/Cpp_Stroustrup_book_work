/*
Create a program to find all the prime numbers between 1 and 100. One way to do this is to write a function that will
check if a number is prime (i.e., see if the number can be divided by a prime number smaller than itself) using a vector
of primes in order (so that if the vector is called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then
write a loop that goes from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a vector.
Write another loop that lists the primes you found. You might check your result by comparing your vector of prime
numbers with primes. Consider 2 the first prime.
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
	//Loop over all numbers from 3 to 100
	for (int i = 1; i <= 100; ++i){

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