#include "Warrior.h"



Warrior::Warrior()
{
	className = "Warrior";
}


Warrior::~Warrior()
{
}

float Warrior::getRage()
{
	return rage;
}

void Warrior::setRage(float newRage)
{
	rage = newRage;
}

float Warrior::getMaxRage()
{
	return maxRage;
}

void Warrior::setMaxRage(float newMaxRage)
{
	maxRage = newMaxRage;
}