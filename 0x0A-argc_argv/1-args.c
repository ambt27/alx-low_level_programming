#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguements
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;/*To ignore the argv*/
	printf("%d\n", argc - 1);
	return (0);
}
