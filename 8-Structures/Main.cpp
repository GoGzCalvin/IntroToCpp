#include <iostream>
#include "wallet.h"
#include "student.h"
#include "pvz.h"
#include "vector.h"

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
void PrintStats(playerZombie player)
{
	cout << player.health << endl;
	cout << player.attack << endl;
	cout << player.defense << endl;
}
void DealDamage(playerZombie &player, playerZombie &zombie)
{
	player.health -= zombie.attack;
	zombie.health -= player.attack;


	cout << "You attacked and dealt  " << player.attack << " damage. The zombie has " << zombie.health << " health remaining." << endl;
	cout << "The zombie attacked and dealt " << zombie.attack << " damage. The player has " << player.health  << " health remaining." << endl;
}
void Heal(playerZombie &Character)
{
	Character.health += 15;
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
void pvz()
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


	

	do
	{
		cout << "Player vs Zombie!" << endl;
		cout << "Input '1' to attack.\n Input '2' to view player stats.\n Input '3' to view zombie stats." << endl;
		cin >> input;

		if (input == 1)
		{
			DealDamage(player, zombie);
		}

		else if (input == 2)
		{
			PrintStats(player);
		}

		else if (input == 3)
		{
			PrintStats(zombie);
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
			break;
		}


		//return 0;

	} while (player.health > 0 || zombie.health > 0);
}

/*void vector()
{
	cout << "Vector." << endl;
	cout << "Enter 'X' and 'Y value. " << endl;

	cin >> x >> y;

	cout << "Your Vector is " << x << " ," << y << endl;
} */ 

int main()
{
	pvz();


	system("pause");
	return 0;
}