// CHapter 3 Exercise 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int rmp = 0;
	int p   = 0;
	int is  = 0;
	int u = 0;
	int c  = 0;

    cout << "enter rent or morgage payment";
	cin >> rmp;
    cout << "enter phone";
	cin >> p;
	cout << "enter Internet service";
	cin >> is;
	cout << "enter utilities";
	cin >> u;
	cout << "enter cable";
	cin >> c;
	int total = rmp + p + is + u + c;
	cout << "Total monthly expenses: " << total << endl;
	return 0; 
}

