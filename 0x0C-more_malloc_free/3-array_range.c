#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int *str;
	int i, len;

	len = 0;
	if (min > max)
		return (NULL);
	len = max - min + 1;
	str = malloc(sizeof(int) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		str[i] = min++;
	return (str);
}
