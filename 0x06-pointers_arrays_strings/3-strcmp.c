#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: pointer string argument
 * @s2: pointer string argument
 * Return: positive or negative number, or a zero
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
