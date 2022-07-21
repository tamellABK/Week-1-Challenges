#pragma once
#include "Entity.h"
class Player : public Entity
{
private:
	bool m_isBlocking = false;

public:
	Player(string name, short int health, short int minDam, short int maxDam);
	void Block();
	short int Attack();
	void DecreaseHeath(short int decreaseAmt);
};

