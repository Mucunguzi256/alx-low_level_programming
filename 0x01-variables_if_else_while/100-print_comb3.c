#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
int i;
int y;

for (i = 0 ; i < 10 ; i++)
{
for (y = 1 ; y < 10 ; y++)
{
if (i < y && i != y)
{
putchar(i + '0');
putchar(y + '0');
if (i + y != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
