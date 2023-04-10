#include "main.h"

/**
 * clear_bit - sets the value of a bit at a particular index to 0
 * @n: pointer  for the number to be changed.
 * @index: index of the bit to be changed
 * Return: 1 if it worked or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
