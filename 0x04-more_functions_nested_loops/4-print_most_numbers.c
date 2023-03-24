#include "main.h"

/**
 * print_most_numbers - prints numbers save for 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c = 0;

	for (; c <= 9 ; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}