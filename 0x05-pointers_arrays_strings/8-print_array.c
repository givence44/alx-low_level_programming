#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < (n - 1); t++)
	{
		printf("%d, ", a[t]);
	}
		if (t == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
