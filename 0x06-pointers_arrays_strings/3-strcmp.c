#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *
 * @s1: pointer to first string
 *
 * @s2: pointer to second string
 *
 * Return: if str1 < str2; negative difference of the unmatched characters
 *
 * if str1 == str2; 0
 * if str1 > str2; positive difference of the umatched chars
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

