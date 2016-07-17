#include "Player.h"



Player::Player()
{
	strength = 1;
	agility = 1;
	intellect = 1;
	speed = 1;
}


Player::~Player()
{
}

void Player::ShowBattleStats(Player * myPlayer, Enemy * myEnemy)
{
	cout << myPlayer->getName() << "   [" << myPlayer->getClassName() << "]" << endl;
	cout << "Health: " << myPlayer->getHealth() << "/" << myPlayer->getMaxHealth() << endl;
	if (myPlayer->getClassName() == "Warrior") cout << "Rage: " << myPlayer->getRage() << "/" << myPlayer->getMaxRage() << endl;
	else if (myPlayer->getClassName() == "Assassin") cout << "Energy: " << myPlayer->getEnergy() << "/" << myPlayer->getMaxEnergy() << endl;
	else if (myPlayer->getClassName() == "Mage") cout << "Mana: " << myPlayer->getMana() << "/" << myPlayer->getMaxMana() << endl;
	cout << endl;
	cout << "VS" << endl;
	cout << endl;
	cout << myEnemy->getName() << endl;
	cout << "Health: " << myEnemy->getHealth() << "/" << myEnemy->getMaxHealth() << endl;
	cout << endl;
	cout << "1. Attack" << endl;
	cout << "2. Run" << endl;
}

float Player::Damage(float atk, float def)
{
	return atk * (atk / def);
}

void Player::attributeDistribution(Player *myPlayer)
{
	while (myPlayer->getAttributePoints())
	{
		system("cls");
		cout << "You have " << myPlayer->getAttributePoints() << " attribute points remaining. Where do you want to spend them, " << myPlayer->getClassName() << "?" << endl;
		cout << "1. Strength" << endl;
		cout << "2. Agility" << endl;
		cout << "3. Intellect" << endl;

		char choice;
		choice = _getch();
		if (choice == '1')
		{
			myPlayer->setStrength(myPlayer->getStrength() + 1);
			myPlayer->setAttributePoints(myPlayer->getAttributePoints() - 1);
		}
		else if (choice == '2')
		{
			myPlayer->setAgility(myPlayer->getAgility() + 1);
			myPlayer->setAttributePoints(myPlayer->getAttributePoints() - 1);
		}
		else if (choice == '3')
		{
			myPlayer->setIntellect(myPlayer->getIntellect() + 1);
			myPlayer->setAttributePoints(myPlayer->getAttributePoints() - 1);
		}
	}
}

void Player::statsCalculator(Player * myPlayer)
{
	myPlayer->setMaxHealth(myPlayer->getStrength() * 10);
	myPlayer->setAttackPower(myPlayer->getStrength() * 1);
	myPlayer->setDefense(myPlayer->getStrength() * 1);
	myPlayer->setSpeed(myPlayer->getAgility() * 1);
	myPlayer->setDodgeChance(myPlayer->getAgility() * 0.01);
	myPlayer->setCritChance(myPlayer->getAgility() * 0.01);
	myPlayer->setMagicResist(myPlayer->getIntellect() * 1);
	myPlayer->setMaxMana(myPlayer->getIntellect() * 10);
	myPlayer->setMagicPower(myPlayer->getIntellect() * 1);
}

void Player::showCharacterInfo(Player * myPlayer)
{
	system("cls");
	cout << myPlayer->getName() << "   [" << myPlayer->getClassName() << "]" << endl;
	cout << "Health: " << myPlayer->getHealth() << "/" << myPlayer->getMaxHealth() << endl;
	if (myPlayer->getClassName() == "Warrior") cout << "Rage: " << myPlayer->getRage() << "/" << myPlayer->getMaxRage() << endl;
	else if (myPlayer->getClassName() == "Assassin") cout << "Energy: " << myPlayer->getEnergy() << "/" << myPlayer->getMaxEnergy() << endl;
	else if (myPlayer->getClassName() == "Mage") cout << "Mana: " << myPlayer->getMana() << "/" << myPlayer->getMaxMana() << endl;
	cout << endl;
	cout << "*Strength: " << myPlayer->getStrength() << endl;
	cout << "Attack Power: " << myPlayer->getAttackPower() << endl;
	cout << "Defense: " << myPlayer->getDefense() << endl;
	cout << endl;
	cout << "*Agility: " << myPlayer->getAgility() << endl;
	cout << "Speed: " << myPlayer->getSpeed() << endl;
	cout << "Dodge Chance: " << myPlayer->getDodgeChance() * 100 << "%" << endl;
	cout << "Critical Chance: " << myPlayer->getCritChance() * 100 << "%" << endl;
	cout << endl;
	cout << "*Intellect: " << myPlayer->getIntellect() << endl;
	cout << "Magic Resist: " << myPlayer->getMagicResist() << endl;
	cout << "Magic Power: " << myPlayer->getMagicPower() << endl;
}

string Player::getName()
{
	return name;
}

void Player::setName(string newName)
{
	name = newName;
}

string Player::getClassName()
{
	return className;
}

float Player::getStrength()
{
	return strength;
}

void Player::setStrength(float newStrength)
{
	strength = newStrength;
}

float Player::getAgility()
{
	return agility;
}

void Player::setAgility(float newAgility)
{
	agility = newAgility;
}

float Player::getIntellect()
{
	return intellect;
}

void Player::setIntellect(float newIntellect)
{
	intellect = newIntellect;
}

float Player::getAttributePoints()
{
	return attributePoints;
}

void Player::setAttributePoints(float newAttributePoints)
{
	attributePoints = newAttributePoints;
}

float Player::getHealth()
{
	return health;
}

void Player::setHealth(float newHealth)
{
	health = newHealth;
}

float Player::getMaxHealth()
{
	return maxHealth;
}

void Player::setMaxHealth(float newMaxHealth)
{
	maxHealth = newMaxHealth;
}

float Player::getRage()
{
	return 0.0f;
}

void Player::setRage(float newRage)
{
	rage = 0.0f;
}

float Player::getMaxRage()
{
	return 0.0f;
}

void Player::setMaxRage(float newMaxRage)
{
	maxRage = 0.0f;
}

float Player::getEnergy()
{
	return 0.0f;
}

void Player::setEnergy(float newEnergy)
{
	energy = 0.0f;
}

float Player::getMaxEnergy()
{
	return 0.0f;
}

void Player::setMaxEnergy(float newMaxEnergy)
{
	maxEnergy = 0.0f;
}

float Player::getMana()
{
	return 0.0f;
}

void Player::setMana(float newMana)
{
	mana = 0.0f;
}

float Player::getMaxMana()
{
	return 0.0f;
}

void Player::setMaxMana(float newMaxMana)
{
	maxMana = 0.0f;
}

float Player::getAttackPower()
{
	return attackPower;
}

void Player::setAttackPower(float newAttackPower)
{
	attackPower = newAttackPower;
}

float Player::getDefense()
{
	return defense;
}

void Player::setDefense(float newDefense)
{
	defense = newDefense;
}

float Player::getSpeed()
{
	return speed;
}

void Player::setSpeed(float newSpeed)
{
	speed = newSpeed;
}

float Player::getDodgeChance()
{
	return dodgeChance;
}

void Player::setDodgeChance(float newDodgeChance)
{
	dodgeChance = newDodgeChance;
}

float Player::getCritChance()
{
	return critChance;
}

void Player::setCritChance(float newCritChance)
{
	critChance = newCritChance;
}

float Player::getMagicResist()
{
	return magicResist;
}

void Player::setMagicResist(float newMagicResist)
{
	magicResist = newMagicResist;
}

float Player::getMagicPower()
{
	return magicPower;
}

void Player::setMagicPower(float newMagicPower)
{
	magicPower = newMagicPower;
}

int Player::getGold()
{
	return gold;
}

void Player::setGold(int newGold)
{
	gold = newGold;
}
