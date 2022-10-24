#include "main.h"

/**
 * print_sign - prints the sign for n
 * @n: input integer
 * Return: 1 for +ve num, 0 for 0 and -1 for -ve num
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
