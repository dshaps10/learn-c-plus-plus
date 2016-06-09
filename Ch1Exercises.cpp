// File: Ch1 Exercises
#include <iostream>
using namespace std;

/*
Write a program that reads in a temperature in degrees Celsius
and displays the corresponding temperature in degrees Fahrenheit.
The conversion formula is F = 9/5C + 32
*/

int main() {
	double celsius, fahrenheit;

	cout << "This program will display a temperature in Fahrenheit" << endl;
	cout << "Enter a temperature in degrees Celsius: ";
	cin >> celsius;

	fahrenheit = ((9/5) * celsius) + 32;
	cout << fahrenheit << " degrees fahrenheit" << endl;

	return 0;
}













