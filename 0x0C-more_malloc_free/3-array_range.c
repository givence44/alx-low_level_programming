#include <stdlib.h>
#include "main.h"

/**
 * *array_range - A function that creates an array of integers.
 * @min: minimum array values.
 * @max: maximum array values.
 * Return: pointer to the new created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, ent;

	if (min > max)
		return (NULL);

	ent = max - min + 1;

	p = malloc(sizeof(int) * ent);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
