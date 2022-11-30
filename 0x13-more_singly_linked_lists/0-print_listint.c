#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_listint - prints all the elements of a linked list
 * @h: instance of the linked list 'listint_t'
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
