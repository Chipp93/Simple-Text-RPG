#include "Bear.h"



Bear::Bear()
{
	name = "Bear";
	random_device rd;
	mt19937 mt(rd());
	maxHealth = (float)(mt() % 20 + 5);
	health = maxHealth;
	defense = (float)(mt() % 5 + 2);
	speed = 2;
	attackPower = (float)(mt() % 15 + 5);
}


Bear::~Bear()
{
}

void Bear::Attack(Enemy * myEnemy, Player * myPlayer)
{
}
