#pragma once
#include "Player.h"

class Assassin :
	public Player
{
public:
	Assassin();
	~Assassin();

	float getEnergy();
	void setEnergy(float newEnergy);

	float getMaxEnergy();
	void setMaxEnergy(float newMaxEnergy);
};

