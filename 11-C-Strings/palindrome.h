#include <iostream>
#include <cstring>


bool isAlpha(char query)
{
	return query >= 'A' && query <= 'Z' ||
		   query >= 'a' && query <= 'z';
}

char toLower(char query)
{
	if (query >= 'A' && query <= 'Z')
	{
		query += 'a' - 'A';

		return query;
	}
}

bool isPalindrome(char string[])
{
	int i = 0, j = strlen(string)-1;
	do
	{
		while (!isAlpha(string[i])) ++i;
		while (!isAlpha(string[j])) --j;

		if (toLower(string[i]) != toLower(string[j]))
			return false;
		++i;
		--j;
	} while (j >= 0);

	return true;
}

void main()
{

}