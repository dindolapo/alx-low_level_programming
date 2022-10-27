#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i > 9)
			putchar(i % 10 + 97);
		else
			putchar(i % 10 + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
