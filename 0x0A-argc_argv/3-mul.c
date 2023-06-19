#include "main.h"
#include <stdio.h>
/**
 * _convert - function that convert astring to a digit
 * @str: string to convert to digit
 * Return: digit
 */
int _convert(char *str)
{
	int i, j, k, len, f, digit;

	i = j = k = len = f = digit = 0;
	while (str[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (str[i] == '-')
			j++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			f = 1;

			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;

			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (k);
}
/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguements
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _convert(argv[1]);
	b = _convert(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);

}
