#include<iostream>
#include "Car.h"
#include "Ship.h"
#include "Plane.h"
#include "Motorcycle.h"
using namespace std;

int main()
{
	Transport* ptr = nullptr;

	int v;

	cout << "1. Car\n";
	cout << "2. Ship\n";
	cout << "3. Plane\n";
	cout << "4. Motorcycle\n";
	cout << "--->";
	cin >> v;

	switch (v)
	{
	case 1:
		ptr = new Car();

		ptr->SetFuelType("Petrol");
		ptr->SetCargoCapacity(500);
		ptr->SetFuelSize(60);
		break;

	case 2:
		ptr = new Ship();

		ptr->SetFuelType("Diesel");
		ptr->SetCargoCapacity(50000);
		ptr->SetFuelSize(100000);
		break;

	case 3:
		ptr = new Plane();

		ptr->SetFuelType("Kerosene");
		ptr->SetCargoCapacity(20000);
		ptr->SetFuelSize(200000);
		break;

	case 4:
		ptr = new Motorcycle();

		ptr->SetFuelType("Petrol");
		ptr->SetCargoCapacity(50);
		ptr->SetFuelSize(20);
		break;

	default:
		cout << "Error\n";
		break;
	}

	if (ptr != nullptr)
	{
		ptr->Show();

		delete ptr;
	}

	return 0;
}