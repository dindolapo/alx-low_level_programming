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
	char *seperator = "";

	va_list pa;

	va_start(pa, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", seperator, va_arg(pa, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(pa, double));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(pa, int));
				break;
			case 's':
				str = va_arg(pa, char *);
				if (!str)
					printf("(nil)");

				printf("%s%s", seperator, str);
				break;
			default:
				i++;
				continue;
			}
			seperator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(pa);
}
