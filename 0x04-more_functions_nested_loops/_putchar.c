#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to standard output.
 * @c: The charater to print
 *
 * Return: When successiful 1.
 *
 * -1 if an error occures.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
