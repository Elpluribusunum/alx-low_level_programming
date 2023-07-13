#include "hash_tables.h"

/**
 * key_index - Find the index where a key/value is located.
 *      pair ought to be kept in a hash table's array.
 * @key: the index of using the key.
 * @size: The size of the hash table's array.
 *
 * Return: Indicator of the key.
 * Description: include the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
