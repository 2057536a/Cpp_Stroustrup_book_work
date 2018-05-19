//read name and surname with combined cin

#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter your first and second name:\n";
	string first_name;		//first_name is a variable of type string
	string second_name;
	cin>>first_name>>second_name;		//read characters into first_name followed by chars of second name
	
	cout<<"Hello "<<first_name<<" "<<second_name<<"\n";
}