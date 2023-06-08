#include "main.h"
/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 * @x: value 1
 * @y: value 2
 * Return: return value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (res *= _pow_recursion(x, y - 1));
}
