#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first argument
 * @s2: second argument
 * @n: number of byte to allocate
 * Return: return NULL if fail orthewise return string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1len, s2len;

	i = 0;
	j = 0;
	s1len = 0;
	s2len = 0;
	while ((s1) && (s1[s1len]))
		s1len++;
	while ((s2) && s2[s2len])
		s2len++;
	if (n < s2len)
		str = malloc(sizeof(char) * (s1len + n + 1));
	else
		str = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!str)
		return (NULL);
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	while ((n < s2len) && (i < (s1len + n)))
		str[i++] = s2[j++];

	while ((n >= s2len) && (i < (s1len + s2len)))
		str[i++] = s2[j++];
	str[i] = '\0';

	return (str);

}
