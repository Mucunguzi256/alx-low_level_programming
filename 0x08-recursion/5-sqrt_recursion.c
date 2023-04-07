#include "main.h"

int actuat_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns actual square root of a number
 * @n: number to calculate square root of
 * @i: iterate number
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actuat_sqrt_recursion(n, 0));
}

/**
 * actuat_sqrt_recursion - recurses to find natural square root of a number
 * @n: number to square
 * @i: iterator
 * Return: square root
 */

int actuat_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actuat_sqrt_recursion(n, i + 1));
}
