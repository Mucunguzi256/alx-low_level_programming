#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: always 1 otherwise 0
 */

int _isupper(int c)
{
        if (c >= 65 && c <= 90)
                return (1);
        else
                return (0);
}
