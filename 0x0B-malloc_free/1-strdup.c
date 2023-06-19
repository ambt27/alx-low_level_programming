#include "main.h"
#include <stdlib.h>
/**
 * _strdup - unction that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @c: the specific char
 * Return: Null if c is null or a pointer
 */
char *_strdup(char *c)
{
	char *mirror;
	int i;
	int t;

	i = 0;
	t = 0;
	if (c == NULL)
		return (NULL);
	while (c[i] != '\0')
		i++;
	mirror = malloc(sizeof(char) * (i + 1));
	if (mirror == NULL)
		return (NULL);
	while (c[t] != '\0')
	{
		mirror[t] = c[t];
		t++;
	}
	return (mirror);

}
