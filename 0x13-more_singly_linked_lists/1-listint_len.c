#include "lists.h"
#include "lists.h"

/**
 * listint_len - returning number of elements in linked list.
 * @h: The linked list
 * Return: No. of nodes.
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
