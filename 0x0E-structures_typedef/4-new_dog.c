#include <stdlib.h>
#include "dog.h"
/**
 * _len - leng of a string
 * @str: string
 * Return: the len of str
 */
int _len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{

		i++;
	}
	return (i);
}

/**
 * _strcpy - fucntion that copy a string to a other string
 * @dest: string one
 * @src: string two
 * Return: pointer of type string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that create a new dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Return: pointer to a new dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _len(name);
	len2 = _len(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		free(NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
