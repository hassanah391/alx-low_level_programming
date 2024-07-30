#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * new_dog - create a new dog structure
 *
 * Return: a pointer points to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d1;
	dog_t *d;

	d = &d1;
	d->name = name;
	d->age = age;
	d->owner = owner;

	return d;
}
