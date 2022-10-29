#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: pointer argument
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	for (i = 0; str[i] != '\0'; i++)
		;
	k = i / 2;

	if (i % 2 != 0)
	{
		i--;
		for (j = k + 1; j <= i; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (i % 2 == 0)
	{
		for (j = k; j <= i - 1; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
