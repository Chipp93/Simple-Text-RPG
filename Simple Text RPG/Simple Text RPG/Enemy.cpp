#include "Enemy.h"



Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}

string Enemy::getName()
{
	return name;
}

void Enemy::setName(string newName)
{
	name = newName;
}

float Enemy::getHealth()
{
	return health;
}

void Enemy::setHealth(float newHealth)
{
	health = newHealth;
}

float Enemy::getMaxHealth()
{
	return maxHealth;
}

void Enemy::setMaxHealth(float newMaxHealth)
{
	maxHealth = newMaxHealth;
}

float Enemy::getRage()
{
	return rage;
}

void Enemy::setRage(float newRage)
{
	rage = newRage;
}

float Enemy::getMaxRage()
{
	return maxRage;
}

void Enemy::setMaxRage(float newMaxRage)
{
	maxRage = newMaxRage;
}

float Enemy::getEnergy()
{
	return energy;
}

void Enemy::setEnergy(float newEnergy)
{
	energy = newEnergy;
}

float Enemy::getMaxEnergy()
{
	return maxEnergy;
}

void Enemy::setMaxEnergy(float newMaxEnergy)
{
	maxEnergy = newMaxEnergy;
}

float Enemy::getMana()
{
	return mana;
}

void Enemy::setMana(float newMana)
{
	mana = newMana;
}

float Enemy::getMaxMana()
{
	return maxMana;
}

void Enemy::setMaxMana(float newMaxMana)
{
	maxMana = newMaxMana;
}

float Enemy::getDefense()
{
	return defense;
}

void Enemy::setDefense(float newDefense)
{
	defense = newDefense;
}

float Enemy::getMagicResist()
{
	return magicResist;
}

void Enemy::setMagicResist(float newMagicResist)
{
	magicResist = newMagicResist;
}

float Enemy::getAttackPower()
{
	return attackPower;
}

void Enemy::setAttackPower(float newAttackPower)
{
	attackPower = newAttackPower;
}

float Enemy::getMagicPower()
{
	return magicPower;
}

void Enemy::setMagicPower(float newMagicPower)
{
	magicPower = newMagicPower;
}

float Enemy::getCritChance()
{
	return critChance;
}

void Enemy::setCritChance(float newCritChance)
{
	critChance = newCritChance;
}

float Enemy::getDodgeChance()
{
	return dodgeChance;
}

void Enemy::setDodgeChance(float newDodgeChance)
{
	dodgeChance = newDodgeChance;
}

float Enemy::getSpeed()
{
	return speed;
}

void Enemy::setSpeed(float newSpeed)
{
	speed = newSpeed;
}
