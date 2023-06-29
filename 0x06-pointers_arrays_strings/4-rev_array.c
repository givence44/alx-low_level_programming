#include "main.h"

/**
 * reverse_array - Function that reverses the content,
 *  of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int v;
	int c;

	for (v = 0; v < n--; v++)
	{
		c = a[v];
		a[v] = a[n];
		a[n] = c;
	}
}
