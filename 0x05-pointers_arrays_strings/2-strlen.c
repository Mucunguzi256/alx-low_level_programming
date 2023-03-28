#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns string length
 *
 * @str: string for which to get length
 *
 * Return: Always 0.
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
