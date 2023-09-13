#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: input paremeter
 * Description:  a function that prints the last digit of a number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		j = (n % 10) * -1;
	else
		j = n % 10;
	_putchar(j + '0');
	return (j);
}
