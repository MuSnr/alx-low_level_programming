#include "lists.h"
/**
 * listint_len ----> Returns the No. of elements
 * a linked list.
 * @h: Head of a list.
 *
 * Return: No. of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

