/*
Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence
separated by commas. So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same,
they should just be ordered together. So, the input 4 5 4 should give 4, 4, 5.
*/


#include "std_lib_facilities.h"

int main()
{

	//Declare the variables we are going to need
	int num1,num2,num3,min,mid,max;

	cout<<"Enter 3 integers and I will order them numerically\n";


	cin >> num1>>num2>>num3;

	max = num1;


	//If num2 is greater than num1
	if(num2 >= num1){
		max = num2;		//Then num1 is min and num2 is max
		min = num1;

		//Now check with num3 too
		if(num3 >= num2){	//If num1 is min and num2 is max already, then if num3 is larger than num2, that makes:
			max = num3;					
			mid = num2;
			min = num1;
		}
		else if(num3 <= num1){	//Else if num1 is min and num2 is max already, then a num3 smaller than num1 makes:
			min = num3;
			mid = num1;
			max = num2;
		}
		else if(num3 > num1 && num3 < num2){	//Otherwise if num1 is min, num2 is max already and num3 is between them, that makes:
			min =num1;
			mid = num3;
			max = num2;
		}

	}


	//else if num2 is smaller than num1
	else if(num2 <= num1){
		min = num2;	//Then num2 is min and num1 is max
		max = num1;

		//check against num3 now
		if(num3 >= num1){	//If num2 is min and num1 is max already, then if num3 is larger than num1, that makes:
			min = num2;
			mid = num1;
			max = num3;
		}
		else if(num3 <= num2){	//If num2 is min and num1 is max already, then if num3 is smaller than num1, that makes:
			min = num3;
			mid = num2;
			max = num1;
		}
		else if(num3 > num2 && num3 < num1){//Otherwise if num2 is min and num1 is max already, and num3 is between them, that makes:
			min = num2;
			mid = num3;
			max = num1;
		}
	}



	// else num1 and num2 is the same
	else{

	   	//now check with num3 too
	   	if(num3 > num1){	//If num1 and 2 are equal, then a num3 greater than those, makes:
	   		min = num1;
	   		mid = min;
	   		max = num3;

	   	}
	   	else if(num3 < num1){// else, a num3 less than those makes:
	   		min = num3;
	   		mid = min;
	   		max = mid;
	   	}
	   	else{
	   		min = num1;	// else all three are equal
	   		mid = min;
	   		max = mid;
	   	}
	}


	cout<<"The order is: "<<min<<","<<mid<<","<<max<<"\n";



}



