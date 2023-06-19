#include "main.h"
/**
 * *_memcpy - fucntion that copies memry area
 *@dest:adress of memory to target => destination
 *@src: original adress of memory => source
 *@n: size of memory to print
 *Return: dest a pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
