#include <iostream>
#include "mathutils.h"


using namespace std;

// Smaller Number
int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

// Bigger Number
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}

	else
	{
		return b;
	}
}

// Clamp
int clamp(int lower, int upper, int value)
{
	if (value < lower)
	{
		return lower;
	}
	else if (value > upper)
	{
		return upper;
	}

	else
	{
		return value;
	}
}

// Distance
float dist(float x1, float y1, float x2, float y2)
{
	float distance = sqrtf((powf(x2 - x1, 2.0)) + (powf(y2 - y1, 2.0)));
	return distance;
}
