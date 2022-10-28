#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: pointer argument 1
 * @src: pointer argument 2
 * @n: size
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
