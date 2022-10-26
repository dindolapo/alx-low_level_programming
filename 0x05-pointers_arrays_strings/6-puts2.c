#include "main.h"

/**
 * puts2 - prints every other character if a string followed by a new line
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 0)
		{
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
