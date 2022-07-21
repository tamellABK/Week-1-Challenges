#pragma once
#include "Vehicle.h"
class Airplane : public Vehicle
{
protected:
	unsigned short int m_wingspan;

public:
	Airplane(unsigned short int wingspan, string manu, unsigned short int manuDate, string primaryColor);

	void DisplayInformation() override;
	void Drive() override;
};

