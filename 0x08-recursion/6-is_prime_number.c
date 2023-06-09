#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime - function that check if n is a prime number
 * @n: number to check
 * @i: var for loop
 * Return: 0 or 1
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if ((n % i) == 0 && (i > 0))
		return (0);
	return (is_prime(n, i - 1));
}
/**
 * is_prime_number - function that returns
 * 1 if the input integer is a prime number
 * otherwise return 0
 * @n: number to check if is pal
 * Return: return prime of n
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}
