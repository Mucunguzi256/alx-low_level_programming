#include <stdlib.h>
#include "lists.h"

/**
 * list_len - entry point
 * @h: pointer to list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
