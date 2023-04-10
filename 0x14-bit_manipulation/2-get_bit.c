#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index of a number.
 * @n: input number to be seached.
 * @index: index of the bit to start at
 * Return: value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
