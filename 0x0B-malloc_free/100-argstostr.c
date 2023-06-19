#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: numb of arguments
 * @av: the arguments
 * Return: args if ok else return null
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *temp;
	int k;
	int len;

	k = 0;
	len = 0;
	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	temp = malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			temp[k] = av[i][j];
			k++;
		}
		temp[k] = '\n';
		k++;
	}
	return (temp);

}

