//read name and age

#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter your first name and age:\n";
	string first_name;		//first_name is a variable of type string
	int age;				//age is a variable of type integer
	cin>>first_name;		//read characters into first_name
	cin>>age;				//read the integer
	cout<<"Hello "<<first_name<<", age "<<age<<".\n";
}