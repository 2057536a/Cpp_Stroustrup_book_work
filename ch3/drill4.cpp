/*
Declare a char variable called friend_sex and initialize its value to 0. Prompt the user to enter an m if the friend is
male and an f if the friend is female. Assign the value entered to the variable friend_sex. Then use two if-statements to
write the following:
If the friend is male, write “If you see friend_name please ask him to call me.”
If the friend is female, write “If you see friend_name please ask her to call me.”
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

}