#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: pointed destination
 * @b: the desired value
 * @n: number of bytes
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
