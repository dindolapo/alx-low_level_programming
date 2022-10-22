#include "main.h"

/**
 * print_line - draws a straight line in the terminal with it's length
 * determined by the input
 * @n: input integer
 * Return: n
 */
void print_line(int n)
{
	int j = 1;

	if (n > 0)
	{
		while (j <= n)
		{
			_putchar(95);
			j++;
		}
		_putchar('\n');
	}
	else
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
