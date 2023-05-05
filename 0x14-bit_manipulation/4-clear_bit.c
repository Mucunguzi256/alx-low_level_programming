#include "main.h"

/**
 * clear_bit - sets given bitvalue to 0
 * @n: pointer to the number to be changed
 * @index: index of the bit to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
