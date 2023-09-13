#include "main.h"

/**
 * print_alphabet_x10 - print lowercase 10times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
