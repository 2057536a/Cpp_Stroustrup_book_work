/*
There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name
his reward. The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on,
doubling for each of the 64 squares. That may sound modest, but there wasn’t that much rice in the empire! Write a
program to calculate how many squares are required to give the inventor at least 1000 grains of rice, at least 1,000,000
grains, and at least 1,000,000,000 grains. You’ll need a loop, of course, and probably an int to keep track of which
square you are at, an int to keep the number of grains on the current square, and an int to keep track of the grains on all
previous squares. We suggest that you write out the value of all your variables for each iteration of the loop so that you
can see what’s going on.
*/

#include "std_lib_facilities.h"

int main()
{
	//Variables for current square and the current grain number.
	// grain number is 0.5 so that in the first iteration, while we
	//are at the 1st square, we get back 1 grain, i.e. double the
	// initial
	int square = 0;
	double grains = 0.5;

	//keep counting until the end of squares
	while (square < 64){

		grains = grains * 2;	// for each iteration double the grain number
		square += 1;			// move to next square

		//Print numbers after each iteration
		cout<<"Square: "<<square<<" ,grains: "<< grains<<"\n";

		// Check whenever you hit 1000, 1000000 or 1000000000 grains and print out the info
		if (grains >=1000 && grains < 2000 ){	//upper bound 2000 as after doubled, the "at least 1000" grains would be at least 2000 ones
			cout <<"You get at least 1,000 grains after "<<square<<" squares ("<<grains<<" grains in particular)\n";
		}
		if (grains >= 1000000 && grains < 2000000){
			cout <<"You get at least 1,000,000 grains after "<<square<<" squares ("<<grains<<" grains in particular)\n";
		}
		if (grains >= 1000000000 && grains < 2000000000){
			cout <<"You get at least 1,000,000,000 grains after "<<square<<" squares ("<<grains<<" grains in particular)\n";
		}

		
	}

	

}