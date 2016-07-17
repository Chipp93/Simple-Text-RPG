#pragma once
#include "Enemy.h"
class Bear :
	public Enemy
{
public:
	Bear();
	~Bear();

	void Attack(Enemy *myEnemy, Player *myPlayer);
};

