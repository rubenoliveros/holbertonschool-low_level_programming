#include "dog.h"
/**
 * init_dog - initializes a structure of type dog
 * @d: 1st variable
 * @name: 2nd variable
 * @age: 3rd variable
 * @owner: pointer to owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
