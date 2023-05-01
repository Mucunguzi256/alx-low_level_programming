#include "lists.h"

/**
 * listint_len - returns the number of elements linked lists
 * @h:length of  linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
