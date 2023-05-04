#include "main.h"

/**
 * flip_bits - determines how many bits must be changed
 * to go from one number to another
 * @n: initial number
 * @m: second figure
 *
 * Return: amount of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
