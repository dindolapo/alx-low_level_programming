#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
void positive_or_negative(int i);

/**
 * positive_or_negative - Entry point
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
