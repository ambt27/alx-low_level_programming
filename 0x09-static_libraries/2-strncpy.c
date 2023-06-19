#include "main.h"
/**
 * _strncpy - function that copy string
 * @dest: first arg of type char
 * @src: second arg of type char
 * @n: bytes from src
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
