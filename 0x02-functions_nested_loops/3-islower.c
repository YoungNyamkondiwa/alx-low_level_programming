#include "main.h"

/**
* _islower - Checks if character is lowercase.
*
* @c: The character in ASCII
*
* Return: 1 for lowercase or 0 for other.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}

