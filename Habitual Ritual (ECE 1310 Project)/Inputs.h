#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

void InputVectors()
{
	vector <string>Hourly;
	vector <string>Daily;
	vector <string>Weekly;
	vector <string>Monthly;
	vector <string>Yearly;
	int i;

	string frequency;

	string userInp;

	cout << "Choose which list you'd like to populate: \n";
	cout << " 1) Hourly\n 2) Daily\n 3) Weekly\n 4) Monthly\n 5) Yearly\n";
	cin >> i;

	switch (i)
	{
	case 1:

		cout << "Go ahead and enter which habits you'd like to track every hour. Press enter after each input, and type 'done' when finished.\n";

		while (true)
		{
			cin >> userInp;

			if (userInp == "done" || userInp == "Done")
			{
				cout << "Sure! let's move on.\n";
				break;
			}

			Hourly.push_back(userInp);

		}

		for (int k = 0; k < Hourly.size(); k++)
		{
			cout << Hourly[k] << ", ";
		}

		break;

	case 2:



		break;

	case 3:



		break;

	case 4:



		break;

	case 5:



		break;

	}

	


}

void userStart()
{
	string yesNo;

	cin >> yesNo;

	if (yesNo == "Yes" || yesNo == "yes" || yesNo == "Y" || yesNo == "y")
	{
		cout << "Great! I can't wait to get to know you better!\n";
		cout << "let's start by inputting some habits you'd like to reinforce\n";
		cout << "You can choose to input habits on an hourly, daily, weekly, monthly, or even yearly basis!\n";
		InputVectors();
	}

	else if (yesNo == "No" || yesNo == "no" || yesNo == "N" || yesNo == "n")
	{
		cout << "Um, you woke *me* up. Come back when you're serious.\n\n";
		return;
	}

	else
	{
		cout << "You know I'm a crab, right? Like, it's a wonder I can read English at all.\n";
		cout << "Please enter Yes or No in a format I can read.\n";
	}
}

void initialize()
{
	string userName;
	cout << "Welcome to Habit Crab, your premier productivity tracker! \n\n\n";
	cout << "First, let's get to know each other. What's your name?\n\n\n";
	cin >> userName;

	cout << "Nice to meet you, " << userName << "!\n\n";
	cout << "My name is Gabby The Crab! Yes, you have to call me the whole thing.\n";
	cout << "I'm here to help you keep track of your schedule and reinforce your productive side!\n";
	cout << "Keep chipping away at the habits you'd like to reinforce and watch me thrive!\n";
	cout << "You'll also earn Ha-Bits per completed task that you can spend on rewards of your choosing!\n";
	cout << "However, if you don't complete the habits that you set for yourself, you'll lose points\n";
	cout << "Fail to complete enough tasks in a row, and I'll just straight up die!\n";
	cout << "That's right, that's the kind of pact we're entering here.\n";
	cout << "If you can't face the habits you set for yourself, then you'll have to face the emotional blackmail of killing me,\n";
	cout << "Gabby The Crab!\n";
	cout << "There's no other mascot after me either! Once I die, that's it! \n";
	cout << "You pretty much lose access to this app. \n";
	cout << "So, don't be a schmuck! My life and your general sense of self-worth are on the line here.\n";
	cout << "Would you like to get started?\n\n";

	userStart();

}

