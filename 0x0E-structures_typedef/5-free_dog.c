#include <stdlib.h>
#include "dog.h"

/**
* free_dog - main program for frees memory allocated for a struct dog
* @d: parameter for struct dog to free
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
