#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would
 * need to flip to get from one number to another.
 * to get from one number to another
 * @n: The represention of first bits number to flip.
 * @m: The representation of second bits number to flip.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pal;
	int j, v = 0;
	unsigned long int grip = n ^ m;

	for (j = 0; j < 64; j++)
	{
		pal = grip >> j;
		if (pal & 1)
			v++;
	}

	return (v);
}
