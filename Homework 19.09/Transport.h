#pragma once

class Transport
{
protected:
	char* fuelType;
	int cargoCapacity;
	int fuelSize;

public:
	Transport();

	void SetFuelType(const char* FuelType);
	void SetCargoCapacity(int CargoCapacity);
	void SetFuelSize(int FuelSize);

	const char* GetFuelType();
	int GetCargoCapacity();
	int GetFuelSize();

	virtual void Show();

	virtual ~Transport();
};