//Lab4-6.cpp - displays the area of a triangle
//Created/revised by Jake Gruber

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int base = 11;
	int height = 13;
	double area = 0.0;

	//calculate and display area
	area = static_cast<double>(base) * static_cast<double>(height) / 2;
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function