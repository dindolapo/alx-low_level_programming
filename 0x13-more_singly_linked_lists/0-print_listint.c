#include "lists.h"
#include <stdio.h>

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
		c++;
		printf("%d\n", h->n);


		h = h->next;
	}
	return (c);
}
