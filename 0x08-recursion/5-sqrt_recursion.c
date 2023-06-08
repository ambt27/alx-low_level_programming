#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: number to calculate sqrt
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - prototype of sqrt function
 * @n: number to calc sqrt
 * @i: number to compare to n
 * Return: sqrt of n
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}
