#pragma once

#include "Enemy.h"

using namespace std;

class Wolf :
	public Enemy
{
public:
	Wolf();
	~Wolf();

	void Attack(Enemy *myEnemy, Player *myPlayer);
};

