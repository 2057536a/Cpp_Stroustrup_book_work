/*
Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a digit to
its corresponding spelled-out value; e.g., the input 7 gives the output seven. Have the same program, using the same
input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
*/


#include "std_lib_facilities.h"

int main()
{
	vector<string> digits = {"zero","one","two","three","four","five","six","seven","eight","nine"};

	int numInput;

	cout << "Enter a number input\n";

	cin >> numInput;

	switch (numInput){
		case 0:
			cout << digits[0];
			break;
		
		case 1:
			cout << digits[1];
			break;
		case 2:
			cout << digits[2];
			break;
		case 3:
			cout << digits[3];
			break;
		case 4:
			cout << digits[4];
			break;
		case 5:
			cout << digits[5];
			break;
		case 6:
			cout << digits[6];
			break;
		case 7:
			cout << digits[7];
			break;
		case 8:
			cout << digits[8];
			break;
		case 9:
			cout << digits[9];
			break;
	}
	cout <<"\n";

}
