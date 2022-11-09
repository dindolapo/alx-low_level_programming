#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory containing
 * a string
 * @str: argument for input array
 * Return: NULL if str = NULL and NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc((sizeof(*str) * i) + 1);

		if (s == NULL)
			return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';

	return (s);
}
