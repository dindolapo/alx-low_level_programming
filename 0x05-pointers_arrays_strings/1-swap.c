#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input integer
 * @b: input integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;
	i = 0 + *a;
	*a = *b;
	*b = i;
}
