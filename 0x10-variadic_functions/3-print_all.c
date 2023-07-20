#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *va = "";

	va_list best;

	va_start(best, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", va, va_arg(best, int));
					break;
				case 'i':
					printf("%s%d", va, va_arg(best, int));
					break;
				case 'f':
					printf("%s%f", va, va_arg(best, double));
					break;
				case 's':
					str = va_arg(best, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", va, str);
					break;
				default:
					i++;
					continue;
			}
			va = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(best);
}
