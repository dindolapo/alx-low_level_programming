#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: input integer
 * Return: 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
