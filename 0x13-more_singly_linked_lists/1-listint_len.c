#include "Lists.h"

/**
 * listint_len - the number of elements in the linked linkint_t list.
 * @h: head pointer
 * Return: the number of elements of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (node_num);
}
