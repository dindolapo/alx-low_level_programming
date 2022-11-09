#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of characters and inititalizes it with a
 * specific character
 * @size: argument for array size
 * @c: argument for specific character
 * Return: NULL if size = 0 and NULL for failure
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		s[i] = c;

	if (size == 0)
		return (NULL);
	else
		return (s);
}
