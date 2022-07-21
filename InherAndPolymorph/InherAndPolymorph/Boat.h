#pragma once
#include "Vehicle.h"
class Boat : public Vehicle
{
private:
	unsigned short int m_maxPassengers;

public:
	Boat(unsigned short int maxPassengers, string manu, unsigned short int manuDate, string primaryColor);

	void DisplayInformation() override;
	void Drive() override;
};

