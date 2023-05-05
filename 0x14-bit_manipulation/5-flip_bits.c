#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: Integer 1.
 * @m: Integer 2.
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int j = 0;
	unsigned long int i;

	for (i = 0; i < sizeof(flip) * 8; i++)
	{
		if ((flip >> i) & 1)
			j++;
	}

	return (j);
}
