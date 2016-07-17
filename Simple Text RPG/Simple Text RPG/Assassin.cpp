#include "Assassin.h"



Assassin::Assassin()
{
	className = "Assassin";
}


Assassin::~Assassin()
{
}

float Assassin::getEnergy()
{
	return energy;
}

void Assassin::setEnergy(float newEnergy)
{
	energy = newEnergy;
}

float Assassin::getMaxEnergy()
{
	return maxEnergy;
}

void Assassin::setMaxEnergy(float newMaxEnergy)
{
	maxEnergy = newMaxEnergy;
}