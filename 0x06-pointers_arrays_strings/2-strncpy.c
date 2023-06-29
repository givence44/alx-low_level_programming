#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination to storing the copy string.
 * @src: Source string.
 * @n: The most amount of bytes to copied from src.
 * Return: Resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
