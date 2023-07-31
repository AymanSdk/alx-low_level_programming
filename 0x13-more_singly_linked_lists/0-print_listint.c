#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the listint_t list.
 * @h: head of the linkded list node
 * Return: the number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
