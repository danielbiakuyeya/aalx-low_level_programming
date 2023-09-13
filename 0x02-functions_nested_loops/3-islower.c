#include "main.h"

/**
 *_islower - check for lowercase character
 *@c: the character to be checker
 *Description:  a function that checks for lowercase character
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	int i;
	int lower;

	lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
