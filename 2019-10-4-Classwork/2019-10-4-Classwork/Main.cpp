// Name: Louai Hammad
// Intro to CS
// Period 1
// Mr. Williams
// 2019-10-4-Classwork

#include <iostream>
using namespace std;

int main()
{
	// 3
	double pi = 4 * (1.0 - (1.0 / 3.0) + (1.0 / 5.0) - (1.0 / 7.0) + (1.0 / 9.0) - (1.0 / 11.0));
	double pi2 = 4 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0) + (1.0 / 13.0));
	cout << "Pi = " << pi << endl;
	cout << "Pi 2 = " << pi2 << endl;

	// 4
	cout << "Enter temperature in degrees Celsius: ";
	float celsius;
	cin >> celsius;
	double f = (9 / 5) * celsius + 32;
	cout << "Temperature in degrees Fahrenheit: " << f << endl;

	// 1
	double speedInMiles = 24 / (1.0 + (40.0 / 60.0));
	double speedInKilometers = speedInMiles * 1.6;
	cout << "KPH = " << speedInKilometers << endl;

	// Homework 1
	double radius = 5.5;
	double perimeter1 = 2 * radius * pi;
	double area1 = 2 * radius * radius * pi;
	cout << "Perimeter = " << perimeter1 << endl;
	cout << "Area = " << area1 << endl;
	
	// Homework 2
	double width = 4.5;
	double height = 7.9;
	double perimeter = (2 * width) + (2 * height);
	double area2 = width * height;
	cout << "Perimeter = " << perimeter << endl;
	cout << "Area = " << area2 << endl;
}