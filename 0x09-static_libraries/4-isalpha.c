#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: input integer
 * Return: 1 for alphabets, lower or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
