#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The variable number to search.
 * @index: The index, starting from 0 of the bit you want to get.
 * Return: The value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int pal;

	if (index > 63)
		return (-1);

	pal = (n >> index) & 1;

	return (pal);
}
