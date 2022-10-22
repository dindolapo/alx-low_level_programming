#include "main.h"

/**
 * print_diagonal - prints a square followed by a new line on the terminal and
 * it's length is determined by the input
 * @size: input integer
 * @j: first loop integer
 * @k: second loop integer
 * Return: void
 */
void print_square(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
	}
}
