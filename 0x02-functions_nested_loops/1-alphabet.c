#include "main.h"
/**
 * print_alphabet function that prints alphabet in lower case
 * Return: always 0
 */

void void print_alphabet(void);
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_puctchar(i);
	_putchar('\n');
}
