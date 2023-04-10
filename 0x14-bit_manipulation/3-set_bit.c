#include "main.h"

/**
 * set_bit - set bit at a given index to 1.
 * @n: pointer to a number to be changed.
 * @index: index of the bit to be changed.
 * Return: 1 on success, -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
