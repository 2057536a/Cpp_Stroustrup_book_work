/*
Do exercise 6, but with three string values. So, if the user enters the values 
Steinbeck,  Hemingway, Fitzgerald, the output should be Fitzgerald, Hemingway, Steinbeck.
*/



#include "std_lib_facilities.h"

int main()
{

	//Declare the variables we are going to need
	string str1,str2,str3,min,mid,max;

	cout<<"Enter 3 strings and I will order them alphabetically\n";


	cin >> str1>>str2>>str3;

	max = str1;


	//If str2 is greater than str1
	if(str2 >= str1){
		max = str2;		//Then str1 is min and str2 is max
		min = str1;

		//Now check with str3 too
		if(str3 >= str2){	//If str1 is min and str2 is max already, then if str3 is larger than str2, that makes:
			max = str3;					
			mid = str2;
			min = str1;
		}
		else if(str3 <= str1){	//Else if str1 is min and str2 is max already, then a str3 smaller than str1 makes:
			min = str3;
			mid = str1;
			max = str2;
		}
		else if(str3 > str1 && str3 < str2){	//Otherwise if str1 is min, str2 is max already and str3 is between them, that makes:
			min =str1;
			mid = str3;
			max = str2;
		}

	}


	//else if str2 is smaller than str1
	else if(str2 <= str1){
		min = str2;	//Then str2 is min and str1 is max
		max = str1;

		//check against str3 now
		if(str3 >= str1){	//If str2 is min and str1 is max already, then if str3 is larger than str1, that makes:
			min = str2;
			mid = str1;
			max = str3;
		}
		else if(str3 <= str2){	//If str2 is min and str1 is max already, then if str3 is smaller than str1, that makes:
			min = str3;
			mid = str2;
			max = str1;
		}
		else if(str3 > str2 && str3 < str1){//Otherwise if str2 is min and str1 is max already, and str3 is between them, that makes:
			min = str2;
			mid = str3;
			max = str1;
		}
	}



	// else str1 and str2 is the same
	else{

	   	//now check with str3 too
	   	if(str3 > str1){	//If str1 and 2 are equal, then a str3 greater than those, makes:
	   		min = str1;
	   		mid = min;
	   		max = str3;

	   	}
	   	else if(str3 < str1){// else, a str3 less than those makes:
	   		min = str3;
	   		mid = min;
	   		max = mid;
	   	}
	   	else{
	   		min = str1;	// else all three are equal
	   		mid = min;
	   		max = mid;
	   	}
	}


	cout<<"The order is: "<<min<<","<<mid<<","<<max<<"\n";



}