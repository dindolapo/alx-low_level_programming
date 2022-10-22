#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal and it's length
 * is determined by the input
 * @n: input integer
 * @j: first loop integer
 * @k: second loop integer
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 1; k <= i; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
	}
}
