#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 * Return: output
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
