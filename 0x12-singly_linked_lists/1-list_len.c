#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: points to the node inputed
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;

		h = h->next;
	}

	return (c);
}
