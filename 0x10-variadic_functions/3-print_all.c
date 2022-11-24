#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format for what functions prints
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str = "";
	int i = 0;
	char *seperator = ", ";

	va_list pa;

	va_start(pa, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%c%s", va_arg(pa, int), seperator);
				break;

			case 'f':
				printf("%f%s", va_arg(pa, double), seperator);
				break;

			case 'i':
				printf("%d%s", va_arg(pa, int), seperator);
				break;

			case 's':
				str = va_arg(pa, char *);
				if (!str)
					printf("nil");

				printf("%s", str);
				break;

			default:
				i++;
				continue;
			}
			i++;
		}
	}
	printf("\n");
	va_end(pa);
}
