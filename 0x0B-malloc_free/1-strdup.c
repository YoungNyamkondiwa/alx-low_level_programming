#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer new memory
 * @str: string to be  copy
 * Return: pointer to the array or null
 **/

char *_strdup(char *str)
{
	char *strDup;
	int a, i;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	strDup = malloc(sizeof(*str) * a);
	if (strDup == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		strDup[i] = str[i];
		i++;
	}
	return (strDup);
}
