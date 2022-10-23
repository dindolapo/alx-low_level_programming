#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints numbers 1 to 100. Printing fizz for numbers that are
 * multiples of three, buzz for numbers that are multiples of five and
 * fizzbuzz for numbers which are multiples of both three and five
 *
 *Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
