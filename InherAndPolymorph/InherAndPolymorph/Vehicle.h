#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vehicle
{
protected:
	string m_manufacturer;
	unsigned short int m_manuDate;
	string m_primaryColor;

public:
	Vehicle(string manu, unsigned short int manuDate, string primaryColor);

	virtual void DisplayInformation() = 0;

	virtual void Drive() = 0;
};

