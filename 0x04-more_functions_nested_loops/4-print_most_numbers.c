#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 with the exception of 2 and 4
 *
 * Return: numbers
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i >= 48 && i <= 57)
	{
		if (i == 50 || i == 52)
		{
		}
		else
		{
			_putchar(i);
		}
		i++;
       	}
	_putchar('\n');
}
