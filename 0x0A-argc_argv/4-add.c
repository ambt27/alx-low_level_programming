#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * is_digit - function that check if a string contains non digit char
 * @str: string to check
 * Return: 0 if Nok else return 1
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

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
	return (j);

}

/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguements
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int flag, strToInt, res_sum;

	res_sum = 0;
	flag = 1;
	while (flag < argc)
	{
		if (is_digit(argv[flag]))
		{
			strToInt = atoi(argv[flag]);
			res_sum += strToInt;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		flag++;
	}
	printf("%d\n", res_sum);
	return (0);
}
