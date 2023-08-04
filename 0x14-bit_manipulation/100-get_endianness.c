#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int j = 1;
	unsigned char *v = (unsigned char *) &j;

	return (*v);
}
