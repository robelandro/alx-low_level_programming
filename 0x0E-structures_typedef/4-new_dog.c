#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pt_dog;
	int i, n_name, n_owner;

	pt_dog = malloc(sizeof(*pt_dog));
	if (pt_dog == NULL || !(name) || !(owner))
	{
		free(pt_dog);
		return (NULL);
	}

	for (n_name = 0; name[n_name]; n_name++)
		;

	for (n_owner = 0; owner[n_owner]; n_owner++)
		;

	pt_dog->name = malloc(n_name + 1);
	pt_dog->owner = malloc(n_owner + 1);

	if (!(pt_dog->name) || !(pt_dog->owner))
	{
		free(pt_dog->owner);
		free(pt_dog->name);
		free(pt_dog);
		return (NULL);
	}

	for (i = 0; i < n_name; i++)
		pt_dog->name[i] = name[i];
	pt_dog->name[i] = '\0';

	pt_dog->age = age;

	for (i = 0; i < n_owner; i++)
		pt_dog->owner[i] = owner[i];
	pt_dog->owner[i] = '\0';

	return (pt_dog);
}
