#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	printf("%d\n", i);

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c\n", s[j]);
	}
	printf("%s\n", s);
}
