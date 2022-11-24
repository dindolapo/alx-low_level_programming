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
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{

		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}

	printf("\n");

	va_end(ap);
}
