/*
File: endsWith.cpp
------------------
This function checks to see if a certain string ends with a certain
suffix.  Will return a boolean value depending on whether the
answer is true or false 
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function prototypes
bool endsWith(string str, string suffix);

// Main program
int main() {
	string str, suffix;
	cout << "enter a string: ";
	getline(cin, str);
	cout << "now enter in the suffx: ";
	getline(cin, suffix);
	bool result = endsWith(str, suffix);

	if (result == true) {
		cout << str << " does indeed end with " << suffix;
	} else {
		cout << str << " does not end with " << suffix;
	}
}

/*
Function: endsWith
Usage: result = endswith(str, suffix);
--------------------------------------
Takes a substring of the last three letters of a word and checks
the substring against an input suffix. If the two match, the
function returns true, else it returns false
*/
bool endsWith(string str, string suffix) {
	string lastThree = str.substr(str.length() - 3);
	if (lastThree == suffix) {
		return true;
	} else {
		return false;
	}
}