#include "Airplane.h"

Airplane::Airplane(unsigned short int wingspan, string manu, unsigned short int manuDate, string primaryColor)
	:Vehicle(manu, manuDate, primaryColor) 
{
	this->m_wingspan = wingspan;
}

void Airplane::DisplayInformation() 
{
	cout << "--Airplane Stats--" << endl;
	cout << "Manufacturer: " << m_manufacturer << endl;
	cout << "Manufacturer Date: " << m_manuDate << endl;
	cout << "Primary Color: " << m_primaryColor << endl;
	cout << "Wingspan Length: " << m_wingspan << endl << endl;
}

void Airplane::Drive() 
{
	cout << "Plane goes WOOSH!" << endl;
}
