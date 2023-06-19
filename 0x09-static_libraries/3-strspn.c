#include "main.h"
/**
 * _strspn - fucntion that gets the legth of a prefix substring
 *@s: string to
 *@accept: inpput string
 *Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				j++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
