#pragma once
#include <iostream>
#include <conio.h>
#include <string>
#include <random>

#include "Player.h"

using namespace std;

class Enemy
{
	friend class Player;
protected:
	string name;
	float health, maxHealth,
		rage, maxRage,
		energy, maxEnergy,
		mana, maxMana,
		defense, magicResist,
		attackPower, magicPower,
		critChance, dodgeChance,
		speed;

public:
	Enemy();
	~Enemy();

	virtual void Attack(Enemy *myEnemy, Player *myPlayer) = 0;

	string getName();
	void setName(string newName);

	float getHealth();
	void setHealth(float newHealth);

	float getMaxHealth();
	void setMaxHealth(float newMaxHealth);

	float getRage();
	void setRage(float newRage);

	float getMaxRage();
	void setMaxRage(float newMaxRage);

	float getEnergy();
	void setEnergy(float newEnergy);

	float getMaxEnergy();
	void setMaxEnergy(float newMaxEnergy);

	float getMana();
	void setMana(float newMana);

	float getMaxMana();
	void setMaxMana(float newMaxMana);

	float getDefense();
	void setDefense(float newDefense);

	float getMagicResist();
	void setMagicResist(float newMagicResist);

	float getAttackPower();
	void setAttackPower(float newAttackPower);

	float getMagicPower();
	void setMagicPower(float newMagicPower);

	float getCritChance();
	void setCritChance(float newCritChance);

	float getDodgeChance();
	void setDodgeChance(float newDodgeChance);

	float getSpeed();
	void setSpeed(float newSpeed);
};

