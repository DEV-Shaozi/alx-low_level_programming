#include "dog.h"
#include <stddef.h>

/**
 * init_dog - intialize a dog structure
 * @d: a dog structure
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
