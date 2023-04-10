#include <unistd.h>
/**
 * _putchar -prints character c to stdout.
 * @c:character to be printed.
 *
 * Returns: 1 if successful.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

