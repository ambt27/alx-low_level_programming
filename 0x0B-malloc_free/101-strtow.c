#include "main.h"
#include <stdlib.h>
/**
 * number_of_words - function that count wors
 * @word: the word to count
 * Return: number of words
 */
int number_of_words(char *word)
{
	int flag;
	int i;
	int j;

	flag = 0;
	j = 0;
	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}
	return (j);
}

/**
 * strtow - unction returns a pointer to an array of strings (words)
 * @str: input string
 *Return: splits of the words
 */
char **strtow(char *str)
{	char **array, *tmp;
	int i, j, c, len, words, end, start;

	len = 0;
	c = 0;
	j = 0;
	while (*(str + len))
		len++;
	words = number_of_words(str);
	if (words == 0)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if ((str[i] == ' ') || (str[i] == '\0'))
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	array[j] = NULL;
	return (array);
}
