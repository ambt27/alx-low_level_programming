#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the argu
 */
int _strlen(char *s)
{
	int flag = 0;

	while (*s != '\0')
	{
		flag++;
		s++;
	}

	return (flag);
}
