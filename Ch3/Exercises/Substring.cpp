/*
File: Substring.cpp
-------------------
This function will take 3 arguments:
1) str: The string from which the substring will be returned
2) pos: The starting point of the substring
3) n: The length of the substring
and return a substring
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function prototypes
string substring(string str, int pos, int n);

// Main program
int main() {
	string str;
	int pos, n;
	cout << "This program will take a string and return a substring" << endl;
	cout << "Enter a string: ";
	getline(cin, str);
	cout << "Enter a starting position: ";
	cin >> pos;
	cout << "Enter a number of characters: ";
	cin >> n;
	string sub = string(str, pos, n);
	cout << "Substring: " << sub << endl;
}

/*
Function: substring
Usage: string sub = string(str, pos, n);
----------------------------------------
This function takes three arguments: a string, a starting position,
and a number of characters. It will return a substring of the 
original string based on the parameters provided
*/
string substring(string str, int pos, int n) {
	string sub = "";
	int count = n;
	for (int i = pos; count > 0; i++) {
		sub += str[i];
		count -= 1;
	}
	return sub;
}









