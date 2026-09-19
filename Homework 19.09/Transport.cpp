#include<iostream>
#include<cstring>
#include "Transport.h"
using namespace std;

Transport::Transport()
{
	fuelType = nullptr;
	cargoCapacity = 0;
	fuelSize = 0;
}

void Transport::SetFuelType(const char* FuelType)
{
	delete[] fuelType;

	fuelType = new char[strlen(FuelType) + 1];
	strcpy_s(fuelType, strlen(FuelType) + 1, FuelType);
}

void Transport::SetCargoCapacity(int CargoCapacity)
{
	cargoCapacity = CargoCapacity;
}

void Transport::SetFuelSize(int FuelSize)
{
	fuelSize = FuelSize;
}

const char* Transport::GetFuelType()
{
	return fuelType;
}

int Transport::GetCargoCapacity()
{
	return cargoCapacity;
}

int Transport::GetFuelSize()
{
	return fuelSize;
}

void Transport::Show()
{
	cout << "Fuel type: " << fuelType << endl;
	cout << "Cargo capacity: " << cargoCapacity << " kg" << endl;
	cout << "Fuel size: " << fuelSize << " l" << endl;
}

Transport::~Transport()
{
	delete[] fuelType;
}