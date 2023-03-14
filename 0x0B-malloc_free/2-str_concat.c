#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/
char *str_concat(char *s1, char *s2)
{
	char *strabc;
	int a, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = j = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[j] != '\0')
		j++;
	strabc = malloc(sizeof(char) * (a + j + 1));
	if (strabc == NULL)
		return (NULL);
	a = j = 0;
	while (s1[a] != '\0')
	{
		strabc[a] = s1[a];
		a++;
	}
	while (s2[j] != '\0')
	{
		strabc[a] = s2[j];
		a++, j++;
	}
	strabc[a] = '\0';
	return (strabc);
}
