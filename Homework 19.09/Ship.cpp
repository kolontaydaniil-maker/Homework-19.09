#include<iostream>
#include "Ship.h"
using namespace std;

void Ship::Show()
{
	cout << "\nShip\n";
	cout << "Fuel type: " << GetFuelType() << endl;
	cout << "Cargo capacity: " << GetCargoCapacity() << " kg" << endl;
	cout << "Fuel size: " << GetFuelSize() << " l" << endl;
}