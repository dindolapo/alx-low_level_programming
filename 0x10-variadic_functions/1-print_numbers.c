#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @seperator: a seperator character
 * @n: number of arg
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (seperator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			printf("%d", va_arg(ap, int));

			if (i < n - 1)
			{
				printf("%s", seperator);

			}
		}
	}

	printf("\n");

	va_end(ap);
}
