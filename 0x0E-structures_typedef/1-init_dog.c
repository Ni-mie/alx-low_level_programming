#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog.
 * @d: Pointer
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
