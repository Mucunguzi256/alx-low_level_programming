#include "main.h"
#include <stdio.h>

/**
 * leet - check the code for
 * @str: string to be returned
 * Return: str
 */

char *leet(char *str)
{
	int i;
	int j;

	char *a = "aAeEoOtTlT";
	char *b = "44337711";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	}
	return (str);
}

