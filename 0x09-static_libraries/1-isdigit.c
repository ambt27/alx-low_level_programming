#include"main.h"
/**
 * _isdigit - checks if a number is digit
 * @n: digit to be checked
 * Return: 1 if n is a digit otherwise 0
 */
int _isdigit(int n)
{

	int i = 48, j = 57;

	if (n >= i && n <= j)
		return (1);
	return (0);
}
