#include "main.h"

/**
 * print_alphaber_x10 - check code
 *
 * Return: prints the alphabets 10 times, each on a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
