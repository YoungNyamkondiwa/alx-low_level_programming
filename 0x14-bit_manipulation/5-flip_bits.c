#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped.
 * to get from one number to another
 * @n: innitial number
 * @m: number to be changed to
 * Return: the number of bit transformation needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result;

	result = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			result++;
	return (result);
}
