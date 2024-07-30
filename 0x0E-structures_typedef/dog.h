#include "stdio.h"
#include "stdlib.h"

/**
 * struct dog - Structure for storing dog information
 * @name: A pointer to a string representing the name of the dog
 * @age: A float representing the age of the dog in years
 * @owner: A pointer to a string representing the name of the dog's owner
 *
 * Description: This structure stores basic information about a dog,
 * including its name, age, and owner's name. It is intended for use in
 * programs that need to manage and manipulate data related to dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
