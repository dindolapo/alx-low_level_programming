#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using the function 'malloc'
 * @b: function input arg
 * Return: pointer to the allocated memory
 *  termination status of '98' at malloc faliure
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(b);

	if (s == NULL)
		exit (98);

	return s;
}
