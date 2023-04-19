#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for dog_t struct
 * @d: A pointer to the dog_t struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
