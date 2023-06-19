#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array
 * of chars, and initializes it with a specific char
 * @size: size of array
 * @c: the specific char
 * Return: O or null
 */
char *create_array(unsigned int size, char c)
{
	char *mess;
	unsigned int i;

	mess = malloc(sizeof(char) * size);
	if (size == 0 || mess == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		mess[i] = c;
	return (mess);
}
