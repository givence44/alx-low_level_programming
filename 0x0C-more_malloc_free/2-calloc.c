#include <stdlib.h>
#include "main.h"


/**
 * *_calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: Elements in the array.
 * @size: Size of each element.
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, k = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	p = malloc(k);

	if (p == NULL)
		return (NULL);

	while (i < k)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
