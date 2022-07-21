#pragma once
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

class Entity
{
protected:
	string m_name;
	short int m_health;
	short int m_minDam;
	short int m_maxDam;
	bool m_isAlive = true;

public:
	Entity(string name, short int health, short int minDam, short int maxDam);
	void PrintEntityDetails();
	void DecreaseHeath(short int decreaseAmt);

	//Attack Action | Returns Damage Value "Done"
	short int Attack();
	//Is Entity Alive | Getter for m_isAlive
	bool AliveStatus();
};

