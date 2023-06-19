#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @str1: first string
 * @str2: second string
 * Return: Null if failure otherwise
 * return the string concate
 */
char *str_concat(char *str1, char *str2)
{
	char *res;
	int i;
	int j;

	i = 0;
	j = 0;
	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
		j++;
	res = malloc(sizeof(char) * (i + j + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		res[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		res[i] = str2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
