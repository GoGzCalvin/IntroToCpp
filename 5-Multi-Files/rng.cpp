#include "rng.h"
#include <cstdlib>
using namespace std;


void seedRng(int seed)
{
	srand(seed);
}

int rng(int random)
{
	random = rand() % 100 + 1;
	return random;
}

int rngRange(int min, int max, int randos)
{
	randos = rand() % min + max;
	return randos;
}

bool rngb()
{
	return rand() % 2;
}

bool rngbChance(float chance)
{
	return rand() % 100 + 1 < (chance * 100);
}