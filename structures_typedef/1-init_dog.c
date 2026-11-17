#include "dog.h"
/**
 * init_dog - Initialises a dog structure
 * @d: Pointer to the dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
