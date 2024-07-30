#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the dog structure to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner of the dog
 *
 * Description: This function initializes a variable of type struct dog with
 * the provided name, age, and owner information.
 */
void init_dog(dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("OK\n");
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
