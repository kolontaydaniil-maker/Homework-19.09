#include<iostream>
#include "Plane.h"
using namespace std;

void Plane::Show()
{
	cout << "\nPlane\n";
	cout << "Fuel type: " << GetFuelType() << endl;
	cout << "Cargo capacity: " << GetCargoCapacity() << " kg" << endl;
	cout << "Fuel size: " << GetFuelSize() << " l" << endl;
}