#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 *  @ptr: is a pointer to the memory previously allocated with a call
 *  to malloc: malloc(old_size)
 *  @old_size: s the size, in bytes, of the allocated space for ptr
 *  @new_size: is the new size, in bytes of the new memory block
 *  Return: pointer to a new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *oldptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	newptr = malloc(new_size);
	if (!newptr)
		return (NULL);
	oldptr = newptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			newptr[i] = oldptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			newptr[i] = oldptr[i];
	}
	free(ptr);

	return (newptr);
}
