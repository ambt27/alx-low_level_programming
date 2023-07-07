#include "main.h"
/**
 * get_endianness - function that checks if a
 * machine is a little or big endian
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *str = (char *) &i;

	return (*str);
}
