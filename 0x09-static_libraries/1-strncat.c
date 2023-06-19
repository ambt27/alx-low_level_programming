#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 i* @dest: first arg
 * @src: second arg
 * @n: number of char to be copied
 * Return: return val dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
