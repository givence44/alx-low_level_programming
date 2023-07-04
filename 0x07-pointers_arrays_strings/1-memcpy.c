#include "main.h"

/**
 *_memcpy - A function that copies memory area
 *@dest: Memory where is stored
 *@src: Memory address where is copied
 *@n: Number of bytes
 *Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
