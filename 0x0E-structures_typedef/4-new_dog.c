#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new instance of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;

	the_dog = malloc(sizeof(dog_t));
	if (the_dog == NULL)
		return (NULL);

	the_dog->name = name;
	the_dog->age = age;
	the_dog->owner = owner;

	return (the_dog);
}
