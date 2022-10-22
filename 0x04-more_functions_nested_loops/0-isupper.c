#include "main.h"

/**
 * _isupper - check for uppercase character
 *
 * Return - 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
