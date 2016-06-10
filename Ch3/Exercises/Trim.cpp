/*
File: Trim.cpp
--------------
This file trims the whitespace from the beginning and end of a
string by passing by reference
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function prototypes
string trimmer(string str);

// Main program
int main() {
	string str;
	cout << "This program will trim the extra whitespace from a string" << endl;
	cout << "Enter a string: ";
	getline(cin, str);
	string trimmed = trimmer(str);
	cout << "Here is your cleaned string: " << str << endl;
}

/*
Function: trim
Usage: str = trim(str);
-----------------
Trims the whitespace from the beginning and end of a string
and modifies the original string in place
*/
string trimmer(string str) {
	string trimmed = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != '\0') {
			trimmed += str[i];
		}
	}
	return trimmed;
}



