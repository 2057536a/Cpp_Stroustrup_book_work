/*
Prompt the user to enter the age of the recipient and assign it to an int variable age. Have your program write “I hear
you just had a birthday and you are age years old.” If age is 0 or less or 110 or more, call simple_error("you're
kidding!") using simple_error() from std_lib_facilities.h.
*/


#include "std_lib_facilities.h"
int main () {
    
    string first_name = "";
    cout << "Enter the name of the person you want to write to\n";
    cin >> first_name;
    cout << "Dear " << first_name << ',' << endl;
    cout << "    How are you?  I am fine.  I miss you.\n";

    string another_name;
    cout << "Enter the name of another friend\n";
    cin >> another_name;
    cout << "\nHave you seen " << another_name << " recently?\n";


    char friend_sex = 0;
    cout << "Enter the sex of the friend\n";
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << "If you see " << another_name
            << " please ask him to call me.\n";
    if (friend_sex == 'f')
        cout << "If you see " << another_name
            << " please ask her to call me.\n";


    int age;
    cout<<"What is the recipient's age?\n";
    cin>>age;
    cout<<"I hear you just had a birthday and you are "<< age <<" years old\n";
    if(age<=0 || age >=110){
        error("you're kidding!");
    }

}