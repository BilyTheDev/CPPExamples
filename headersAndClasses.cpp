/*
This code is written by Bily ( Bily#6405 on Discord ) and can be redistributed.
This is an example on headers, classes and functions that return values.
As simple as this code can be, it was created to help complete beginners in C++ who want to know what the language looks like. I really hope you guys find it useful.
This is the 2nd time I've written open source code and hopefully I'll write more!
*/

#include <iostream> 

// Header file that has the class and functions we made
#include "Header.h"

using namespace std;

int main()
{
	regularPolygon square; // object square will be the shape we're using
	
	// giving the square its properties

	square.sideWidth = 2; 

	square.sideLength = 2;

	square.sidesNumber = 4;

	// area will be equal to the returned value
	int area = square.calculateArea(square.sideWidth, square.sideLength);

	cout << area << endl;
	 
	// perimeter will be equal to the returned value
	int perimeter = square.calculatePerimeter(square.sideLength, square.sidesNumber);

	cout << perimeter << endl;
}