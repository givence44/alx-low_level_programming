#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 * @b: A Pointer pointing to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int grip = 0;
	int j;

	if (!b)
		return (0);

	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		grip = grip * 2 + (b[j] - '0');

		for (j = 0; b[j]; j++)
	}

	return (grip);
}
