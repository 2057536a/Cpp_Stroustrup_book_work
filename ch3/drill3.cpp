/*
Now prompt the user for the name of another friend, and store it in friend_name. Add a line to your letter: “Have you
seen friend_name lately?”
*/



#include "std_lib_facilities.h"

int main()
{
	cout<<"Enter the name of the person you want to write to:\n";

	string first;

	cin>>first;

	cout<<"Dear "<<first<<",\n";

	cout<<"Hello, how are you? I am fine. I miss you.\n";


	cout<<"Tell me the name of another friend of yours:\n";

	string friend_name;

	cin>>friend_name;

	cout<<"Have you seen "<<friend_name<<" lately?\n";
}