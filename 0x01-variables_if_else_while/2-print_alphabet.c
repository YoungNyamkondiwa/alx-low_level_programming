#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: displays 0 for success
 */

int main(void)
{

	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = '0'; i <= '26'; i++)
	{
		putchar(alp[i]);
	}
		putchar('\n');
	return (0);
}
