#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: The number of paramters.
 * @...: A variable numbers to calculate the sum.
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
