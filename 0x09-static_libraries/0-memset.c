#include "main.h"

/**
 * *_memset -function that fills memory with a constant byte
 *@s: the adress of memory
 *@n: size of the memory to print
 *@b: constant
 * Return: s as a pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
