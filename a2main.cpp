#include <iostream>
#include <math.h>
#include<iomanip>
/*
 * This program calculates the number of slices that can be taken from a pizza based on the diameter
 * of the pizza.
 * 
 * The program is returning the number of slices that can be taken from a pizza.
 */
using namespace std;

// Constants used for the calculation
const double PI = 3.14159;
const float SLICE = 14.125;

int main () {
	// Introducing the the variable that will be used for the diameter	
	float d;
	// Asking the user's input 
	cout << "What is the diameter of the pizza in inches? ";
	cin >> d;
	// Getting radius by dividing the diameter "d" by 1/2
	float r = d / 2;	
	// Area formula calculated with constant and radius	
	float area = PI * r * r;
	// Formula to calculate the number of slices
	float totalSlices = area / SLICE;
	// Writes floats in fixed-point notation
	cout << fixed;
	/* Sets decimal precision and prints the number of total slices that can be taken from the pizza	
	* This can be used because the iomanip library was imported
	*/
	cout << setprecision(1)<< "You can take up to: " << totalSlices << " slices from this pizza... yum"<< endl;	
	
	return 0;
}
