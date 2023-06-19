#include"main.h"
/**
 * _isupper - checks if a caracter is uppercase
 * @c: char to check
 * Return: 1 if c otherwise 0
 * Other return 0
 */

int _isupper(int c)
{
	int i = 65;
	int j = 90;

	if (c >= i && c <= j)
		return (1);
	return (0);
}
