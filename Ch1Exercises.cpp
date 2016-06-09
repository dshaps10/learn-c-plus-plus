// File: Ch1 Exercises
#include <iostream>
using namespace std;


int convertToFeet(int meters);

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


	/*
	Write a program that converts a distance in meters to the 
	corresponding English distance in feet and inches. The conversion
	factors you need are
		- 1 inch = 0.0254 meters
		- 1 foot = 12 inches
	*/
	float meters;

	cout << "This program will display convert meters to feet" << endl;
	cout << "Enter a distance in meters: ";
	cin >> meters;

	cout << meters << " is equal to " << convertToFeet(meters) << "feet" << endl;

	return 0;
}

int convertToFeet(int meters) {
	float inches, feet;
	const float to_inches = 0.0254;
	const float to_feet = 12;

	inches = meters * to_inches;
	feet = inches * to_feet;

	return feet;
}












