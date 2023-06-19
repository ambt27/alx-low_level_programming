#include "main.h"
/**
 * _islower - check if the caracter is lowercase
 * @c: is parameter for the function
 * Return: 1 if the letter is lowercase otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
