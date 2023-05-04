#include "main.h"

/**
 * get_endianness - tests to see if a machine is large or little endian
 * Return: 0 for large, 1 for tiny
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
