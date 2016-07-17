#pragma once

#include <string>
#include <iostream>
#include <conio.h>

#include "Enemy.h"

using namespace std;

class Player
{
	friend class Enemy;
protected:
	string name;
	string className = "Player";
	float strength, agility, intellect;
	float attributePoints = 5;
	float health, maxHealth;

	float rage, maxRage;
	float energy, maxEnergy;
	float mana, maxMana;

	float attackPower, defense;
	float speed, dodgeChance, critChance;
	float magicResist, magicPower;

	int gold;

public:

	Player();
	~Player();
	
	void ShowBattleStats(Player *myPlayer, Enemy *myEnemy);

	float Damage(float atk, float def);

	void attributeDistribution(Player *myPlayer);
	void statsCalculator(Player *myPlayer);
	void showCharacterInfo(Player *myPlayer);

	string getName();
	void setName(string newName);

	string getClassName();

	float getStrength();
	void setStrength(float newStrength);

	float getAgility();
	void setAgility(float newAgility);

	float getIntellect();
	void setIntellect(float newIntellect);

	float getAttributePoints();
	void setAttributePoints(float newAttributePoints);

	float getHealth();
	void setHealth(float newHealth);

	float getMaxHealth();
	void setMaxHealth(float newMaxHealth);

	virtual float getRage();
	virtual void setRage(float newRage);

	virtual float getMaxRage();
	virtual void setMaxRage(float newMaxRage);

	virtual float getEnergy();
	virtual void setEnergy(float newEnergy);

	virtual float getMaxEnergy();
	virtual void setMaxEnergy(float newMaxEnergy);

	virtual float getMana();
	virtual void setMana(float newMana);

	virtual float getMaxMana();
	virtual void setMaxMana(float newMaxMana);

	float getAttackPower();
	void setAttackPower(float newAttackPower);

	float getDefense();
	void setDefense(float newDefense);

	float getSpeed();
	void setSpeed(float newSpeed);

	float getDodgeChance();
	void setDodgeChance(float newDodgeChance);

	float getCritChance();
	void setCritChance(float newCritChance);

	float getMagicResist();
	void setMagicResist(float newMagicResist);

	float getMagicPower();
	void setMagicPower(float newMagicPower);

	int getGold();
	void setGold(int newGold);
};