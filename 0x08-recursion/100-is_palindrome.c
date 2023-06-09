#include "main.h"
int recursion_len(char *c);
int is_pal(char *s, int i, int len);
/**
 * is_pal - function that checks if a char is a pal
 * @s: string to chek
 * @i: loop variable
 * @len: length of s
 * Return: 1 if s is a pal, 0 if not
 */
int is_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i > len)
		return (1);
	return (is_pal(s, i + 1, len - 1));
}
/**
 * recursion_len - function that calculate the len of a string
 * @s: string to calculate the length
 * Return: len of the string
 */
int recursion_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + recursion_len(s + 1));
}
/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not
 * @c: string to check if it is palendrome
 * Return: 1 if c is pal, 0 if not
 */
int is_palindrome(char *c)
{
	if (*c == 0)
		return (1);
	return (is_pal(c, 0, recursion_len(c)));
}
