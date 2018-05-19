/*
Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the
user to enter a number of miles. Hint: There are 1.609 kilometers to the mile.
*/


#include "std_lib_facilities.h"

int main()
{
	double distance = 0.0;

	cout<<"Enter the distance in miles\n";
	cin >> distance;

	cout<<"Converting "<<distance<<" miles in km: "<<distance*1.609<<" kilometers.\n";
}