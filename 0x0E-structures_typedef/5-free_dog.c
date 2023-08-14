#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - freeing mem allocated to struct dog.
 * @d: Struct dog to free.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
