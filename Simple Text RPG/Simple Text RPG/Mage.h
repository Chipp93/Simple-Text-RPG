#pragma once
#include "Player.h"

class Mage :
	public Player
{
public:
	Mage();
	~Mage();

	float getMana();
	void setMana(float newMana);

	float getMaxMana();
	void setMaxMana(float newMaxMana);
};

