#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strabc;
	int a;
	unsigned int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a] != '\0')
		a++;
	strabc = malloc(sizeof(char) * (a + n + 1));
	if (strabc == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		strabc[a] = s1[a];
		a++;
	}
	while (b < n && s2[b] != '\0')
	{
		strabc[a] = s2[b];
		i++, b++;
	}
	strabc[a] = '\0';
	return (strabc);
}
