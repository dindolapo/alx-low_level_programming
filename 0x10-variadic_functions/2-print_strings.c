#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - print strings followed by a new line
 * @seperator: a seperator character
 * @n: number of arg
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (seperator == NULL)
		{
			printf("%s", va_arg(ap, char *));
		}
		if (va_arg(ap, char *) == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", va_arg(ap, char *));

			if (i < n - 1)
			{
				printf("%s", seperator);

			}
		}
	}

	printf("\n");

	va_end(ap);
}
