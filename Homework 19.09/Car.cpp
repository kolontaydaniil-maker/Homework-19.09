#include<iostream>
#include "Car.h"
using namespace std;

void Car::Show()
{
	cout << "\nCar\n";
	cout << "Fuel type: " << GetFuelType() << endl;
	cout << "Cargo capacity: " << GetCargoCapacity() << " kg" << endl;
	cout << "Fuel size: " << GetFuelSize() << " l" << endl;
}