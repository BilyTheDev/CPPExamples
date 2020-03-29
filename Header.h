#include <iostream>

using namespace std;


class regularPolygon { 
public: // Polygon properties: 
	int sideWidth; 
	int sideLength;
	int sidesNumber;

	// function to calculate the area

	int calculateArea(int x, int y)
	{
		return x * y;
	} 

	// function to calculate the perimeter

	int calculatePerimeter(int sideWidthOrLength, int sidesNumber)
	{
		return sideWidthOrLength * sidesNumber;
	} 
};

