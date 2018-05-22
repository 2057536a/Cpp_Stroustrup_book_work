/*
Write a program that plays the game “Rock, Paper, Scissors.” If you are not familiar with the game do some research
(e.g., on the web using Google). Research is a common task for programmers. Use a switch-statement to solve this
exercise. Also, the machine should give random answers (i.e., select the next rock, paper, or scissors randomly). Real
randomness is too hard to provide just now, so just build a vector with a sequence of values to be used as “the next
value.” If you build the vector into the program, it will always play the same game, so maybe you should let the user
enter some values. Try variations to make it less easy for the user to guess which move the machine will make next.
*/


#include "std_lib_facilities.h"

int main()
{

	vector<string> choices = {"Rock", "Paper", "Scissors"};

	int playerChoice;

	string AIchoice;

	int randomInd;

	cout<<"Choose on of: rock(1), paper(2) or scissors(3):\n";

	while (cin >> playerChoice){

		//Randomly select an element from vector as AI choice
		randomInd = rand() % choices.size();
		AIchoice = choices[randomInd];


		switch (playerChoice){
			case 1:
				if (AIchoice == "Scissors"){
					cout << "You lose(You: Rock), AI:("<<AIchoice<<")\n";
				}
				else if (AIchoice == "Paper"){
					cout << "You win (You: Rock), AI:("<<AIchoice<<")\n";
				}
				else{
					cout << "It's a draw (You: Rock), AI:("<<AIchoice<<")\n";
				}
				break;

			case 2:
				if (AIchoice == "Scissors"){
					cout << "You lose (You: Paper), AI:("<<AIchoice<<")\n";
				}
				else if (AIchoice == "Rock"){
					cout << "You win (You: Paper), AI:("<<AIchoice<<")\n";
				}
				else{
					cout << "It's a draw (You: Paper), AI:("<<AIchoice<<")\n";
				}
				break;

			case 3:
				if (AIchoice == "Rock"){
					cout << "You lose (You: Scissors), AI:("<<AIchoice<<")\n";
				}
				else if (AIchoice == "Paper"){
					cout << "You win (You: Scissors), AI:("<<AIchoice<<")\n";
				}
				else{
					cout << "It's a draw (You: Scissors), AI:("<<AIchoice<<")\n";
				}
				break;
		}
	}

}