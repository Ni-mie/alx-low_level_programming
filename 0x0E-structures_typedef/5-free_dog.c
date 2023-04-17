#include "dog.h"

/**
 * free_dog - Function that frees dog.
 * @d: Struct dog
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
