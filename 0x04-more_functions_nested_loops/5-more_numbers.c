#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, ten times
 *
 * Return: numbers
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
