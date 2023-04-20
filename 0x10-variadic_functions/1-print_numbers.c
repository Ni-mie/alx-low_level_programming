#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function thst prints numbers, followed by a new line.
 * @separator: String to separate  the integers
 * @n: Integer
 * @...: A number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
