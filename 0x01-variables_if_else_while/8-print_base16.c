#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: displays 0 for success
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
	putchar(digit);

	putchar('\n');

	return (0);
}
