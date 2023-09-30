#include "main.h"
/**
 * _strlen - check length of string
 * @s: pointer to the address of the string
 * Description: a fucntion that returns the
 * of a string.
 * Return: length of string
 */

int _strlen(char *s)
{
	int _len;

	_len = 0;

	while (*s != '\0')
	{
		_len += 1;
		s++;
	}
	return (_len);
}
