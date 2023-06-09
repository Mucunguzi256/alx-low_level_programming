#include "main.h"

/**
 * _strncat - concacts two strings
 *
 * @dest: string to be appended
 *
 * @src: string to append to dest
 *
 * @n: number of bytess from scr to appnd to dest
 *
 * Return: aponter to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
