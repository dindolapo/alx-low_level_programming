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

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 != 0)
	{
		i--;
		for (j = 0; j <= i / 2; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = 0; j <= i / 2; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
