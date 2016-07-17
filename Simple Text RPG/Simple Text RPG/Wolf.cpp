#include "Wolf.h"



Wolf::Wolf()
{
	name = "Wolf";
	random_device rd;
	mt19937 mt(rd());
	maxHealth = (float)(mt() % 10 + 1);
	health = maxHealth;
	defense = (float)(mt() % 2 + 1);
	speed = 2;
	attackPower = (float)(mt() % 10 + 1);
}


Wolf::~Wolf()
{
}

void Wolf::Attack(Enemy *myEnemy, Player *myPlayer)
{
	myPlayer->setHealth(myPlayer->getHealth() - myPlayer->Damage(myEnemy->getAttackPower(), myPlayer->getDefense()));
	system("cls");
	myPlayer->ShowBattleStats(myPlayer, myEnemy);

	random_device rd;
	mt19937 mt(rd());

	int chance = mt() % 2;
	if (chance) cout << endl << "The wolf ripped your flesh with its fierceful jaw for " << myPlayer->Damage(myEnemy->getAttackPower(), myPlayer->getDefense()) << " damage!";
	else cout << endl << "The wolf mauled you with his sharp claws for " << myPlayer->Damage(myEnemy->getAttackPower(), myPlayer->getDefense()) << " damage!";
	_getch();
}