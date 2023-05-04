#include "main.h"

/**
 * get_bit - returns the value of a bit in a decimal number at an index
 * @n: search number
 * @index: the bit's index
 *
 * Return: the bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
