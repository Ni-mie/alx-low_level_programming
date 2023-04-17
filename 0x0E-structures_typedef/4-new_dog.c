#include "dog.h"
/**
 * new_dog -Function that creates a new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
	{
		return (NULL);
	}

	dog->name = strdup(name);

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = strdup(owner);

	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
