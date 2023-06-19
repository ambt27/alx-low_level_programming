#include "main.h"
#include<stdlib.h>
/**
 * *_memset - function that fills memory
 * @str: memory to fill
 * @c: char to copy
 * @n: number of times to copy b
 * Return: pointer to memory
 */
char *_memset(char *str, char c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/**
 * *_calloc -unction that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each elem
 * Return: return poiter to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	_memset(str, 0, nmemb * size);
	return (str);
}
