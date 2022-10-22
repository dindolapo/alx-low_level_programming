#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, ten times
 *
 * Return: numbers
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 48; i <= 58; i++)
		{
			_putchar(i + 1);
		}
		_putchar('\n');
		j++;
	}
}
