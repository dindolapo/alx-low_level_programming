#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -intializes a variable of type struct dog
 * @d: instance of the struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
