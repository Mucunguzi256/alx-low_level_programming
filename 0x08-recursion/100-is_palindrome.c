#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check the code
 * @s: string to revers
 * Return: 1 if palindrome and  0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
	return (1 +  _strlen_recursion(s + 1));
}

/**
 * commentor - returns string length
 * @s: string to calculate length
 * @n1: biggest int
 * @n2: smallest int
 * Return: lenth of string
 */

int commentor(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + commentor(s, n1 + 1, n2 - 1));
		return (0);
}

/**
 * check_pal - check character recursively for palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
 */

int check_pal(char *s)
{
	if (*s == '\0')
		return (1);
	return (commentor(s, 0, is_palindrome(s) - 1));
}
