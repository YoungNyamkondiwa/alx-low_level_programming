#include "main.h"

/**
 * get_endianness - checks if big or little or big endianness
 * Return: 0 if endian is  big, 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
