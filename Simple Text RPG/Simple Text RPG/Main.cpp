#include <iostream>
#include <conio.h>
#include <random>
#include "Player.h"
#include "Warrior.h"
#include "Assassin.h"
#include "Mage.h"
#include "Enemy.h"
#include "Wolf.h"
#include "Bear.h"

using namespace std;

void Menu(Player*, Enemy*);
void Explore(Player*, Enemy*);
void DarkwoodForest(Player*, Enemy*);
void CaveOfAThousandEchoes();
void Battle(Player*, Enemy*);
void ShowBattleStats(Player*, Enemy*);

int main()
{
	cout << "What's your name?" << endl; // asking for name
	string name;
	getline(cin, name);

	system("cls"); // asking for class
	cout << "Hello, " << name << "." << endl;
	cout << "What will your character be?" << endl;
	cout << "1. Warrior" << endl;
	cout << "2. Assassin" << endl;
	cout << "3. Mage" << endl;

	Player *myPlayer;
	Enemy *myEnemy;
	Wolf myWolf;
	myEnemy = &myWolf;

	Warrior myWarrior;
	Assassin myAssassin;
	Mage myMage;

	char choice; // choosing class
	for (;;)
	{
		choice = _getch();
		if (choice == '1')
		{
			myPlayer = &myWarrior;
			myPlayer->setName(name);
			myPlayer->setMaxRage(100);
			myPlayer->setRage(0);
			break;
		}
		else if (choice == '2')
		{
			myPlayer = &myAssassin;
			myPlayer->setName(name);
			myPlayer->setMaxEnergy(100);
			myPlayer->setEnergy(100);
			break;
		}
		else if (choice == '3')
		{
			myPlayer = &myMage;
			myPlayer->setName(name);
			break;
		}
	}

	myPlayer->attributeDistribution(myPlayer);

	myPlayer->statsCalculator(myPlayer);
	myPlayer->setHealth(myPlayer->getMaxHealth());
	myPlayer->setMana(myPlayer->getMaxMana());

	Menu(myPlayer, myEnemy);

	system("pause");

	return 0;
}

void Menu(Player *myPlayer, Enemy *myEnemy) // menu starts here
{
	for (;;)
	{
		system("cls");
		cout << "1. Explore the area" << endl;
		cout << "2. Merchant" << endl;
		cout << "3. Nurse" << endl;
		cout << "4. Save and exit" << endl;

		char choice;
		for (;;)
		{
			choice = _getch();
			if (choice == '1')
			{
				Explore(myPlayer, myEnemy);
				break;
			}
			else if (choice == '2')
			{
				// merchant
				break;
			}
			else if (choice == '3')
			{
				// nurse
				break;
			}
			else if (choice == '4')
			{
				exit(0);
				// TO DO save
				break;
			}
		}
	}

}

void Explore(Player *myPlayer, Enemy *myEnemy)
{
	for (;;)
	{
		system("cls");
		cout << "1. Darkwood Forest" << endl;
		cout << "2. Cave of a Thousand Echoes" << endl;
		cout << endl << "0. Return" << endl;

		char choice;
		choice = _getch();
		if (choice == '1')
		{
			DarkwoodForest(myPlayer, myEnemy);
			continue;
		}
		else if (choice == '2')
		{
			CaveOfAThousandEchoes();
			continue;
		}
		else if (choice == '0') break;

	}
}

void DarkwoodForest(Player *myPlayer, Enemy *myEnemy)
{
	random_device rd;
	mt19937 mt(rd());

	Wolf myWolf;
	Bear myBear;

	int chance = mt() % 2;
	if (chance) myEnemy = &myWolf;
	else myEnemy = &myBear;

	Battle(myPlayer, myEnemy);
}

void CaveOfAThousandEchoes()
{

}

void Battle(Player *myPlayer, Enemy *myEnemy)
{
	random_device rd;
	mt19937 mt(rd());
	int chance;

	for (;;)
	{
		system("cls");
		ShowBattleStats(myPlayer, myEnemy);

		char choice;
		choice = _getch();
		if (choice == '1') // Attack
		{
			myEnemy->setHealth(myEnemy->getHealth() - myPlayer->Damage(myPlayer->getAttackPower(), myEnemy->getDefense()));
			system("cls");
			ShowBattleStats(myPlayer, myEnemy);
			cout << endl << "You dealt " << myPlayer->Damage(myPlayer->getAttackPower(), myEnemy->getDefense()) << " damage!" << endl;
			_getch();
			myPlayer->setHealth(myPlayer->getHealth() - myPlayer->Damage(myEnemy->getAttackPower(), myPlayer->getDefense()));
			system("cls");
			ShowBattleStats(myPlayer, myEnemy);
			cout << endl << myEnemy->getName() << " dealt " << myPlayer->Damage(myEnemy->getAttackPower(), myPlayer->getDefense()) << " damage to you!";
			_getch();
			continue;
		}
		else if (choice == '2') // Run
		{
			if (myPlayer->getSpeed() > myEnemy->getSpeed())
			{
				cout << endl << "You successfully escaped from " << myEnemy->getName() << "! ^_^" << endl;
				_getch();
				break;
			}
			else if (myPlayer->getSpeed() < myEnemy->getSpeed())
			{
				cout << endl << "You tried to run from " << myEnemy->getName() << " but you couldn't escape... :-<" << endl;
				_getch();
				system("cls");
				ShowBattleStats(myPlayer, myEnemy);
				cout << endl << myEnemy->getName() << " dealt " << myPlayer->Damage(myEnemy->getAttackPower(), myPlayer->getDefense()) << " damage to you!";
				_getch();
				continue;
			}
			else if (myPlayer->getSpeed() == myEnemy->getSpeed())
			{
				chance = mt() % 2;
				if (chance)
				{
					system("cls");
					cout << "You successfully escaped from " << myEnemy->getName() << "! ^_^" << endl;
					_getch();
					break;
				}
				else
				{
					system("cls");
					cout << "You tried to run from " << myEnemy->getName() << " but you couldn't escape... :-<" << endl;
					_getch();
					continue;
				}

			}
		}

	}
}