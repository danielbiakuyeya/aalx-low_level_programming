#include "main.h"

/**
 * flip_bits - returns the number of bits that would flip
 * one number to another in the project
 * @n: value to be fliped in the project
 * @m: targeted number to be fliped to in the project
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, bits;

	mask = n ^ m;
	bits = 0;

	while (mask > 0)
	{
		bits += (mask & 1);
		mask >>= 1;
	}
	return (bits);
}
