#include "main.h"

/**
 * print_binary - A function that prints the binary
 * representation of a number.
 * @n: The binary representation of number to print in binary form.
 */
void print_binary(unsigned long int n)
{
	unsigned long int lad;
	int j, v = 0;

	for (j = 63; j >= 0; j--)
	{
		lad = n >> j;

		if (lad & 1)
		{
			_putchar('1');
				v++;
		}
		else if (v)
			_putchar('0');
	}
	if (!v)
		_putchar('0');
}
