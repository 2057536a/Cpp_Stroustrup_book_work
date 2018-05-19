/*
Add an introductory line or two, like “How are you? I am fine. I miss you.” Be sure to indent the first line. Add a few
more lines of your choosing — it’s your letter.
*/


#include "std_lib_facilities.h"

int main()
{
	cout<<"Enter the name of the person you want to write to:\n";

	string first;

	cin>>first;

	cout<<"Dear "<<first<<",\n";

	cout<<"Hello, how are you? I am fine. I miss you.\n";
}