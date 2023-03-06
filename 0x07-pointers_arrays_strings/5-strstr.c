#include "main.h"
/**
 *_strstr - find substring in initial string
 *@haystack: initial string to be searched
 *@needle: substring to be found
 *
 *Return: substring if found, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

