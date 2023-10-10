#include <stdlib.h>
#include "dog.h"

/**
* init_dog - main program that initializes a variable of type struct dog
* @d: parameter for  pointer to struct dog to initialize
* @name: parameter name to initialize
* @age: parameter for age to initialize
* @owner: parameter for owner to initialize
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
