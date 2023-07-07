#include "main.h"
/**
 * flip_bits - function that count the number of
 * bit to change
 * @n: fisrt number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flag, count = 0;
	unsigned long int current;
	unsigned long int exclu = n ^ m;

	flag = 63;
	while (flag >= 0)
	{
		current = exclu >> flag;
		if (current & 1)
			count++;
		flag--;
	}
	return (count);

}
