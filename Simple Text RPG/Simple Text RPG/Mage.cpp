#include "Mage.h"



Mage::Mage()
{
	className = "Mage";
}


Mage::~Mage()
{
}

float Mage::getMana()
{
	return mana;
}

void Mage::setMana(float newMana)
{
	mana = newMana;
}

float Mage::getMaxMana()
{
	return maxMana;
}

void Mage::setMaxMana(float newMaxMana)
{
	maxMana = newMaxMana;
}
