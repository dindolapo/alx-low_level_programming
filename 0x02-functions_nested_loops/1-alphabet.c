#include "main.h"

void print_alphabet(void)
{
	char alphabet;
	for(alphabet='a'; alphabet<='z'; alphabet++)
	{
		_putchar(alphabet);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return(0);
}
