#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the elements of a linked list
 * @h: instance of the linked list 'listint_t'
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;

		h = h->next;
	}
	return (c);
}
