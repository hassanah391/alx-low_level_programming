#ifndef HEADER
#define HEADER

/**
 * struct dog - Structure to a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
