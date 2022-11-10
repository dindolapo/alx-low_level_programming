#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string from one variable to another
 * @dest: input pointer arg
 * @src: input pointer arg
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
