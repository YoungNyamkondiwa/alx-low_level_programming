#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;
	return ((void *)memory);
}
