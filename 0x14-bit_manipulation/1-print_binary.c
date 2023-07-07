#include "main.h"
#include <stddef.h>
/**
 * print_binary - function that prints equi binary for a de * cimal
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int flag;

	i = 63;
	while (i >= 0)
	{
		flag = n >> i;
		if (flag & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
