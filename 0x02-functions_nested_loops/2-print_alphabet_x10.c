#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10x alphabets
 * Return: always 0
 */

void print_alphabet_x10(void)
{
int i;
char x;
i = 0;

while (i < 10)
{
for (x = 'a' ; x <= 'z' ; x++)
_putchar(x);
}
_putchar('\n');
i++;
}
