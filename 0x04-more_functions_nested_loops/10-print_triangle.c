#include "main.h"

/**
 * print_triangle - prints a triangle followed by a newline
 * @size: input integer
 * Return: void
 */
void print_triangle(int size)
{
	int i, k;
	int j = size;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(32);
			}
			for (k = 1; k <= i; k++)
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
