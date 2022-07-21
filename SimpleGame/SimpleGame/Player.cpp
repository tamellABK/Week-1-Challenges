#include "Player.h"

Player::Player(string name, short int health, short int minDam, short int maxDam)
	:Entity(name, health, minDam, maxDam)
{

}

//Since we have block logic to calculate, need our own method separate from Entity(Base)
void Player::DecreaseHeath(short int decreaseAmt)
{
	short int newAmt = decreaseAmt;
	if (m_isBlocking) 
	{ 

		//Blocking Halves damage done (rounded up)
		newAmt = floor(decreaseAmt / 2);
		cout << m_name << " Blocks " << (decreaseAmt-newAmt) << " Damage!\n";
	}

	//Call base method since everything else should be the same logic
}

void Player::Block()
{
	m_isBlocking = true;
}

//Since we have block logic to clean up, need our own method separate from Entity(Base)
short int Player::Attack() 
{
	//Since only two options, attacking mean not blocking so reset m_isBlocking
	m_isBlocking = false;

	//Call base method since everything else should be the same logic
	return Entity::Attack();
}
