#include<stdlib.h>
#include "dog.h"
/**
 * free_dog -function that free dog
 * @dog: dog to free
 * Return: void
 *
 */
void free_dog(dog_t *dog)
{
	if (dog)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}
