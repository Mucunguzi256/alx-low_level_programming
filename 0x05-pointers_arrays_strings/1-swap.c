#include <stdio.h>

/**
 * swap_int - swaps value of 2 ints
 *
 * @a: first int to be swapped
 *
 * @b: second int to be swapped
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
