#include<iostream>
#include "Motorcycle.h"
using namespace std;

void Motorcycle::Show()
{
	cout << "\nMotorcycle\n";
	cout << "Fuel type: " << GetFuelType() << endl;
	cout << "Cargo capacity: " << GetCargoCapacity() << " kg" << endl;
	cout << "Fuel size: " << GetFuelSize() << " l" << endl;
}