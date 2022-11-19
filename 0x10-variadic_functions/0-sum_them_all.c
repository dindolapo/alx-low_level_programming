#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it parameters
 * @n: number of arg
 * Return: 0 if n is 0 OR sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;
	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
