#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * free_dog: deallocates a dog structure
 * @d: a pointer points to the dog structure we want to deallocate
 *
 */
void free_dog(dog_t *d)
{

	free(d->name);
	free(d->owner);
	free(d);


}
