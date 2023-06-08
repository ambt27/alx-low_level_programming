#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number to calculate factoriel
 * Return: factoriel of n
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	return (res *= factorial(n - 1));
}
