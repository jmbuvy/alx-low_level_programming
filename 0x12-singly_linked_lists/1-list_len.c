#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Funct returning no. of elments in a linked lists.
 * @h: The Pointer to list_t lists.
 * Return: return no. of elements in h
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
