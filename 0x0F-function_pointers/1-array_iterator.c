#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: tab of int
 * @size: is the size of the array
 * @action: pointer of the array_iterator
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
