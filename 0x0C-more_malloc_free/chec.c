#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - function that check if a string contains non digit char
 * @str: string to check
 * Return: 0 if Nok else retunr 1
 *
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] < '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _len - function that return the lengh of a string
 * @str: string to check
 * Return: return lengh of str
 */
int _len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * main - test function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *mul1, *mul2;
	int len1, len2, genlen, i, sep, mul1digit, mul2digit, *mul, val = 0;

	mul1 = argv[1], mul2 = argv[2];
	if (argc != 3 || !is_digit(mul1) || !is_digit(mul2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _len(mul1);
	len2 = _len(mul2);
	genlen = len1 + len2 + 1;
	mul = malloc(sizeof(int) * genlen);
	if (!mul)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		mul[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		mul1digit = mul1[len1] - '0';
		sep = 0;
		for (len2 = _len(mul2) - 1; len2 >= 0; len2--)
		{
			mul2digit = mul2[len2] - '0';
			sep += mul[len1 + len2 + 1] + (mul1digit * mul2digit);
			mul[len1 + len2 + 1] = sep % 10;
			sep /= 10;
		}
		if (sep > 0)
			mul[len1 + len2 + 1] += sep;
	}
	for (i = 0; i < genlen - 1; i++)
	{
		if (mul[i])
			val = 1;
		if (val)
			_putchar(mul[i] + '0');
	}
	if (!val)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
