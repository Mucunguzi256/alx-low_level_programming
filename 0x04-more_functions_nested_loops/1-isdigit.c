#include "main.h"

/**
 * _isdigit - checks if numbers are 0 - 9
 *
 * @c: char to check
 *
 *  Return: always 1 otherwise 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
