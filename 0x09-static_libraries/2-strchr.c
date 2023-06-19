#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 *@s: string to loop through
 *@c: caracter to search into a string
 *Return: 0
*/
char *_strchr(char *s, char c)
{
	int flag = 0;

	while (s[flag] >= '\0')
	{
		if (s[flag] == c)
			return (&s[flag]);
		flag++;
	}
	return (0);
}
