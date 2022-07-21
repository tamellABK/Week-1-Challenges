#include "Car.h"

Car::Car(unsigned short int wheelSize, unsigned int milesDriven, string manu, unsigned short int manuDate, string primaryColor)
	:Vehicle(manu, manuDate, primaryColor) 
{
	this->m_wheelSize = wheelSize;
	this->m_milesDriven = milesDriven;
}

void Car::DisplayInformation() 
{
	cout << "--Car Stats--" << endl;
	cout << "Manufacturer: " << m_manufacturer << endl;
	cout << "Manufacturer Date: " << m_manuDate << endl;
	cout << "Primary Color: " << m_primaryColor << endl;
	cout << "Wheel Size: " << m_wheelSize << endl;
	cout << "Miles Driven: " << m_milesDriven << endl << endl;;
}

void Car::Drive() 
{
	cout << "Car goes VROOM!" << endl;
}
