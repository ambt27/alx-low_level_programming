#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary to a nu
 * number
 * @b: string to convert
 * Return: convert number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int deci = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci = 2 * deci + (b[i] - '0');
		i++;
	}
	return (deci);
}
