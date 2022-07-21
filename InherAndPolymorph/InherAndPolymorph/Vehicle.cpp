#include "Vehicle.h"

Vehicle::Vehicle(string manu, unsigned short int manuDate, string primaryColor) 
{
	this->m_manuDate = manuDate;
	this->m_manufacturer = manu;
	this->m_primaryColor = primaryColor;
}
