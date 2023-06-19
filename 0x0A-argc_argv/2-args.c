#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguements
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int flag = 0;

	while (flag < argc)
	{
		printf("%s\n", argv[flag]);
		flag++;
	}
	return (0);

}
