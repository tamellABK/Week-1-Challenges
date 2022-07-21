#include "Entity.h"

Entity::Entity(string name, short int health, short int minDam, short int maxDam)
{
	this->m_name = name;
	this->m_health = health;
	this->m_minDam = minDam;
	this->m_maxDam = maxDam;
}

void Entity::PrintEntityDetails() 
{
	cout << "Entity " << m_name << " HP: " << m_health << endl;

}
void Entity::DecreaseHeath(short int decreaseAmt) 
{
	m_health -= decreaseAmt;

	//Set to not alive if below 0 hp
	if (m_health <= 0) { m_isAlive = false; }
}

short int Entity::Attack() 
{

	//Hardcoded 15% chance to miss for all entities
	if ((rand() % 100 + 1) >= 15) {

		//Attack Damage can return random between min and max
		short int dam = rand() % (m_maxDam - m_minDam) + m_minDam + 1;
		cout << m_name << " Attacks For " << dam << " Damage\n";
		return (dam);
	}
	else {
		cout << m_name << " Attack Missed!\n";
		return 0;
	}
}

bool Entity::AliveStatus() 
{
	if (m_isAlive) { return true; }
	return false;
}
