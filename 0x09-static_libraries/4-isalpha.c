#include "main.h"
/**
 * _isalpha - check if the caracter is lowercase
 * @c: is parameter for the function
 * Return: 1 if the letter is lowercase otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
