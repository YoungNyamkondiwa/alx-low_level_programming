#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: displays 0 for success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
