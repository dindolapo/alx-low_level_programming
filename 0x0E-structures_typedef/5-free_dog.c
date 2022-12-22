#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: instance the struct dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
