#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
private:
	unsigned short int m_wheelSize;
	unsigned int m_milesDriven;

public:
	Car(unsigned short int wheelSize, unsigned int milesDriven, string manu, unsigned short int manuDate, string primaryColor);

	void DisplayInformation() override;
	void Drive() override;
};

