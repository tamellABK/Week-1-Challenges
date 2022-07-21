#include "Boat.h"

Boat::Boat(unsigned short int maxPassengers, string manu, unsigned short int manuDate, string primaryColor)
	:Vehicle(manu, manuDate, primaryColor) 
{
	this->m_maxPassengers = maxPassengers;
}

void Boat::DisplayInformation() 
{
	cout << "--Boat Stats--" << endl;
	cout << "Manufacturer: " << m_manufacturer << endl;
	cout << "Manufacturer Date: " << m_manuDate << endl;
	cout << "Primary Color: " << m_primaryColor << endl;
	cout << "Max Passengers Allowed on: " << m_maxPassengers << endl << endl;
}

void Boat::Drive() 
{
	cout << "Boat goes SPLASH!" << endl;
}
