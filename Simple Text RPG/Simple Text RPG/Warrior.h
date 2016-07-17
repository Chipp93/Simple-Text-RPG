#pragma once
#include "Player.h"

class Warrior :
	public Player
{
public:
	Warrior();
	~Warrior();

	float getRage();
	void setRage(float newRage);

	float getMaxRage();
	void setMaxRage(float newMaxRage);
};

