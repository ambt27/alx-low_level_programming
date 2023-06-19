#include "main.h"
/**
 * *_strstr - function that locates a substring
 *@haystack: string to loop in
 *@needle: string to compare to haystack
 *Return: 0
 *
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}
