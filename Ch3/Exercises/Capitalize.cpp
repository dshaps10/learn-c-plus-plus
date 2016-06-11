/*
File: Capitalize.cpp
--------------------
This program capitalizes the first word of a sentence and makes 
the rest of the words lowercase
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function prototypes
void capitalize(string & str);

// Main program
int main() {
	string str, capitalized;
	cout << "This program will take a string and capitalize the first letter of every word" << endl;
	cout << "Enter a string: ";
	getline(cin, str);
	capitalize(str);
	cout << str << endl;
}

/*
Function: capitalize
Usage: capitalized = capitalize(str);
-------------------------------------
This function takes a string of input and capitalizes the first
letter of the sentence and minimizes the rest
*/
void capitalize(string & str) {
	str[0] = toupper(str[0]);
	for (int i = 1; i < str.length(); i++) {
		str[i] = tolower(str[i]);
	}
}