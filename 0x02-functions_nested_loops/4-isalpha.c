#include "main.h"

/**
 *_isalpha - check for lowercase character
 *@c: input paremeter
 *Description:  a function that checks for alphabetic character
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _isalpha(int c)
{
	int i;
	int upper_c;
	int lower_c;

	i = 0;

	for (lower_c = 97; lower_c <= 122; lower_c++)
	{
		for (upper_c = 65; upper_c <= 90; upper_c++)
		{
			if (lower_c == c || upper_c == c)
				i = 1;
		}
	}
	return (i);
}
