#include <iostream>
#include "wallet.h"
#include "student.h"
#include "pvz.h"
using namespace std;

void playerstats()
{
	playerZombie player;

	player.health = 100;
	player.attack = 15;
	player.defense = 10;
	cout << player.health << endl;
	cout << player.attack << endl;
	cout << player.defense << endl;
}

void zombiestats()
{


	playerZombie zombie;


	zombie.health = 150;
	zombie.attack = 20;
	zombie.defense = 5;

	cout << zombie.health << endl;
	cout << zombie.attack << endl;
	cout << zombie.defense << endl;
}
int pvz()
{


		int input;

		playerZombie player;
		player.health = 100;
		player.attack = 15;
		player.defense = 10;


		playerZombie zombie;
		zombie.health = 150;
		zombie.attack = 20;
		zombie.defense = 5;


		cout << "Player vs Zombie!" << endl;
		cout << "Input '1' to attack.\n Input '2' to view player stats.\n Input '3' to view zombie stats." << endl;
		cin >> input;

		if (input == 1)
		{
			cout << "You attacked and dealt  " << player.attack << " damage. The zombie has " << zombie.health - player.attack << " health remaining." << endl;
		}

		else if (input == 2)
		{
			cout << playerstats << endl;
		}

		else if (input == 3)
		{
			cout << zombiestats << endl;
		}

		else if (player.health == 0)
		{
			cout << "Player has died." << endl;
		}

		else if (zombie.health == 0)
		{
			cout << "The zombie has died." << endl;
		}

		else
		{
			cout << "Error." << endl;
		}


		return 0;
}


int main()
{

	pvz();


	system("pause");
	return 0;
}