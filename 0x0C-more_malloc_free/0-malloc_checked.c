#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size to allocate
 * Return: return a pointer to a allocate me
 */
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);
	if (tmp == NULL)
		exit(98);

	return (tmp);
}

