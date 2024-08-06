#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
		printf("%d%s", va_arg(args, int), separator);

		else
			printf("%d", va_arg(args, int));
	}
	printf("%d\n", va_arg(args, int));

}
